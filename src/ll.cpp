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




bool node::searchNode(const std::string& target, field f)
{
    
    bool results = false;
    node* temp = this->next;

    while(temp)
    {
        if(temp->data[f] == target)
        {
            bool results = true;
            return results;
        }
        temp = temp->next;
    }

    return results;
}


//insert
bool node::insertNode(game& GameData)
{   


    //first check if the element we try to insert is already in the list by checking the game ID
    bool found = this->searchNode(GameData[GameID], GameID);


    
    if(found)
    {
        std::cerr << ERROR << "[ERROR] Game already in the list" << RESET << std::endl;
        return false;
    }


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



bool node::deleteNode(const std::string& target)
{
    // Handle edge case where list is empty to avoid segmentation fault
    if (this == nullptr || this->next == nullptr) {
        std::cerr << ERROR << "[ERROR] List is empty." << RESET <<  std::endl;
        return false;
    }

    node* previous = this;
    node* current = this->next;


    //search for the node to delete
    while(current != nullptr)
    {
        if(current->data[GameID] == target)
        {
            //move pointer to currents next 
            //to safely delete the node without 
            //losing the reference
            previous->next = current->next;
            //finally delete the node
            delete current;
            std::cout << SUCCESS << "[SUCCESS] Game Deleted" << RESET << std::endl;
            return true;
        }
        previous = current;
        current = current->next;
    }



    //not found return error 
    std::cerr << ERROR "[ERROR] Game not Found " << RESET << std::endl;
    return false;

}



