#include "hashtable.hpp"



//constructor 

hashtable::hashtable()
{
    this->input.open("library.txt", std::ios::in);
    
    if(!input)
    {
        std::cerr << ERROR << "[ERROR] could not open file" << RESET << std::endl;
        //throw error to indicate the operation failed
        throw std::runtime_error("Error reading file") ;  
    }


    //initialize the hash table
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        this->game_arr[i] = nullptr;
    }
}

//destructor
