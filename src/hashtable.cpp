#include "hashtable.hpp"

//constructor
hashtable::hashtable()
{
    game g;
    this->error_opening_file = false;
    std::ifstream f("Library.txt");
    bool eof = false;

    if(!f.is_open())
    {
        this->error_opening_file = true;
        return;
    }

    //buffer to read each string
    std::string input_buffer;

    while(true)
    {
        input_buffer = EMPTY;
        //read each string
        for(int i = 0; i < NUMBER_OF_FIELDS; i++)
        {
            if(!std::getline(f, input_buffer))
            {
                //end if eof reached
                eof = true;
                break;
            }

            g.Game[i] = input_buffer;
        }

        //insert the game in each table
        for(int i = 0; i < NUMBER_OF_FIELDS; i++)
        {
            if(g.Game[i] != EMPTY){
                size_t index = hash(g.Game[i]);
                this->table[static_cast<field>(i)][index].insert(g);
            }

        }
        //break if we reached eof 
        if (eof)
        {
            f.close();
            return;
        }
    }

    f.close();
}



//destructor
hashtable::~hashtable()
{
    // Clear file content first
    std::ofstream output("bin/Library.txt", std::ios::out | std::ios::trunc);
    output.close();  // Close after clearing the file
    
    // Open the file again for writing
    output.open("Library.txt", std::ios::out);


    std::string input_buffer;
    std::cout << INFO << "[INFO] Saving..." << RESET << std::endl;
    //retrieve each list in GameID table
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        input_buffer = EMPTY;
        //get current linked list
        node *temp = this->table[GameID][i].getHead();

        while(temp != nullptr)
        {
            //right to Library.txt
            for(int f = 0; f < NUMBER_OF_FIELDS; f++)
            {
                input_buffer = temp->data.Game[f];
                output << input_buffer << std::endl;
                //append input buffer to the end of the file 
            }

            temp = temp->next;
        }


    }
    output.close();
    std::cout << INFO << "[INFO] Saved..." << RESET << std::endl;

}


bool hashtable::notOpenedFile()
{
    return this->error_opening_file;
}


//murmur hash (32bit)
size_t hashtable::hash(const std::string& ID)
{
    //constant multipliers used in murmur hash 
    //the selected values are empirical and perform very good in avalanche test

    const int BLOCK_SIZE = 4;
    const uint32_t c1 = 0xcc9e2d51;
    const uint32_t c2 = 0x1b873593;
    const uint32_t m =  0x5bd1e995;
    const uint32_t n =  0x1b873593;
    const uint32_t seed = 0xDEADBEEF;
    size_t target_size = ID.size();
    const size_t remainingBits = target_size % BLOCK_SIZE;
    //initialize index to seed
    size_t index = seed;

    //first stage of murmur hash
    //shift all bytes into position
    for(int i = 0; i < target_size - remainingBits; i+=BLOCK_SIZE)
    {
        uint32_t k = 0;
        k |= (ID[i] << 0);      //8bits
        k |= (ID[i+1] << 8);    //8bits
        k |= (ID[i+2] << 16);   //8bits
        k |= (ID[i+3] << 24);   //8bits

        //mix block with murmur hash operations 
        k *=c1;
        k = (k << 15) | (k >> (32-15));//rotate left by 15 bit
        k *=c2;

        index ^= k;
        index = (index << 13) | (index >> (32-13)); //rotate left by 13 bit
        index = index * m + n;
    }

    //stage 2 : handle remaining bytes

    uint32_t k = 0;
    switch(remainingBits)
    {
        
        case3://3 remaining
            k |= ID[target_size-3] << 16;
            //fallthrough case2
        case2://2 remaining
            k |= ID[target_size-2] << 8;
            //fallthrough case1
        case 1://1 remaining byte
            k |= ID[target_size-1] << 0;
            k *= c1;
            k |= (k << 15) | (k >> (32 -15));//shift left by 15 bits
            k*=c2;
            index ^=k;
    }

    index ^= target_size;
    index = index * m + n;



    //third stage for final avalanche
    //shift and multiply with mixing constants
    index ^= (index >> 16);//shift right 16 bit
    index *= m;
    index ^= (index >> 13);//shift right 13 bit;
    index *= n;


    return index % TABLE_SIZE;

}

//check if game ID already in hash table
bool hashtable::checkGameID(const game &g,size_t hash)
{
    node *temp = this->table[GameID][hash].getHead();

    while(temp != nullptr)
    {
        if(temp->data.Game[GameID] == g.Game[GameID])
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}


//Insert method
bool hashtable::insert(const game& g)
{
    node *temp;
    bool result = false;
    //hash the index based on field 
    size_t index = 0;

    //iterate over number of fields and insert each hashed field to each table
    for(int i = 0; i < NUMBER_OF_FIELDS; i++)
    {
        

        
        //check if the entry is empty
        if(g.Game[i] != EMPTY)
        {
            //calculate the index 
            index = hash(g.Game[i]);
            //first check if GameID already exists
            if(i == 0 && checkGameID(g,index)){
                result = false;
                return result;
            }
            result = this->table[i][index].insert(g);
        }
    }
    return result;
}


//delete function
bool hashtable::deleteGame(const std::string& target)
{
    // Hash target string and retrieve the game from the GameID table
    size_t index = hash(target);
    bool result = false;

    // Retrieve the game to delete by searching with GameID
    game gameToDelete = this->table[GameID][index].retrieve(target);

    // If the game is not found (empty GameID), return false
    if (gameToDelete.Game[GameID].empty())
    {
        return result;
    }

    // Flag to track if the game was deleted from all fields
    bool deletedFromAllFields = true;

    // Delete the game from each field in all hash tables
    for (int field = 0; field < NUMBER_OF_FIELDS; field++)
    {
        index = hash(gameToDelete.Game[field]);
        bool deleted = this->table[field][index].deleteNode(gameToDelete);

        // If deletion fails from any field, set the flag to false
        if (!deleted)
        {
            deletedFromAllFields = false;
        }
    }

    // If the game was successfully deleted from all fields, return true
    if (deletedFromAllFields)
    {
        result = true;
    }

    return result;
}



//search function (all fields)
bool hashtable::searchAllFields(const std::string& target)
{
    int result = false;
    for(int f = 0; f < NUMBER_OF_FIELDS; f++)
    {
        size_t index = hash(target);
        if(this->table[f][index].searchNode(target,static_cast<field>(f)) == true )
        {
            result = true;
        }

    }

    //if we found target in any of the fields then return true 
    return result;

}


//search function for 1 field
bool hashtable::search(const std::string& target,field f)
{

    size_t index = hash(target);
    std::cout << "--------------------------------------------------------------" << std::endl;
    return this->table[f][index].searchNode(target,f);
}


void hashtable::printTable()
{
    size_t ctr = 1;
    node * temp;
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        //retrieve all games from game id since game id is the most reliable way to extract games ( Game ID is Required)
        temp = this->table[GameID][i].getHead();

        while(temp != nullptr)
        {
            std::cout << ctr << " : " << temp->data;
            ctr++;
            temp = temp->next;
        }
    }
}





