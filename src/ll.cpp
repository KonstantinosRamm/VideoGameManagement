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






