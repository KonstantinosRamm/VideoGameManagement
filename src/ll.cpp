#include "ll.hpp"

//constructor
node::node()
{
    //init the current node data to empty
    for(int i = 0; i < NUMBER_OF_FIELDS; i++)
    {
        this->data.Game[i] = EMPTY;
    }
    this->next = nullptr;
}


//insert
bool node::insertNode(game& GameData)
{
    node* temp = new node();
    if(!temp)
    {
        std::cerr << ERROR << "[ERROR] node insertion failed" << RESET << std::endl;
        return false;
    }

    //append to the start of the list
    temp->data = GameData;
    temp->next = this->next;
    this->next = temp;

    return true;


}


std::vector<game> node::searchNode(const std::string& target, field f)
{
    std::vector<game> results;
    node* temp = this->next;

    while(temp)
    {
        if(temp->data[f] == target)
        {
            results.push_back(temp->data);
        }
        temp = temp->next;
    }

    return results;
}
