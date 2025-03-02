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
bool linkedlist::insert(game &g)
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






