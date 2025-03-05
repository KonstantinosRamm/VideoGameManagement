#include "hashtable.hpp"



size_t hashtable::hash(const std::string& ID)
{
    size_t target_size = ID.size();
    size_t index = 0;
    
    for(int i = 0; i < target_size; i++)
    {
        index += ID[i];
    }
    return index % TABLE_SIZE;

}


//Insert method
bool hashtable::insert(const game& g)
{
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


//search function  1 field
bool hashtable::search(const std::string& target,field f)
{
    size_t index = hash(target);
    return this->table[f][index].searchNode(target,f);
}





