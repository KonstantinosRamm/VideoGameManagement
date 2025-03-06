#include "ll.hpp"


//constructor
linkedlist::linkedlist()
{
    for(int i = 0; i < NUMBER_OF_FIELDS; i++)
    {
        this->head.data.Game[i] = EMPTY;
    }
    this->head.next = nullptr;
}

//destructor
linkedlist::~linkedlist()
{
    node * currentNode = this->head.next;
    node * nextNode;
    //delete elements as long as head is not null
    while(currentNode != nullptr)
    {
        nextNode = currentNode->next;
        delete currentNode;
        currentNode = nextNode;
    }
}

//insert method
bool linkedlist::insert(const game &g)
{
    node * temp = new node ;
    //check for allocation fail
    if(!temp)
    {
        std::cerr << ERROR << "[ERROR] An error occured during the insertion" << RESET << std::endl;
        return false;
    }
    temp->data = g;
    temp->next = this->head.next;
    head.next = temp;
    return true;
}


//delete node method 
bool linkedlist::deleteNode(game &g)
{
    node *currentNode = this->head.next;
    node *prevNode = nullptr;

    //iterate over the list to find the node with the containing GameID
    while(currentNode != nullptr)
    {
        if(currentNode->data.Game[GameID] == g.Game[GameID])
        {
            //case : deleting the head node
            if(prevNode == nullptr)
            {
                this->head.next = currentNode->next;
            }
            //case : not in head node
            else
            {
                prevNode->next = currentNode->next;
            }
            delete currentNode;
            return true;
        }
        //move pointers by one position
        prevNode = currentNode;
        currentNode = currentNode->next;
    }
    return false;
}


//method to search node 
bool linkedlist::searchNode(std::string target,field f)
{
    node * iterator = this->head.next;
    bool result = false;
    size_t ctr = 1;
    while(iterator != nullptr)
    {
        //print data 
        if(iterator->data.Game[f] == target) 
        { 
            std::cout << ctr << " : " << iterator->data;
            ctr++;
            result = true;
        }
        //move iterator to the next node and continue searching
        iterator = iterator->next;  
        
    }

    return result;
}

//retrieve method
game linkedlist::retrieve(const std::string & ID)
{
    node *iterator = this->head.next;
    while(iterator != nullptr)
    {
        //find node with that id
        if(iterator->data[GameID] == ID)
        {
            return iterator->data;
        }
        //continue iteration if not found
        iterator = iterator->next;
    }
    //else create an empty game and return it to indicate that no target found
    game temp;
    for(int i = 0; i < NUMBER_OF_FIELDS; i++)
    {
        temp.Game[i] = EMPTY;
    }
    return temp;
}







