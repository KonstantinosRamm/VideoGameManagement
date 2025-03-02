#include "color.hpp"
#include "ll.hpp"
#include "videogame.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <array>
 //a prime number to reduce collisions and improve performance of the hash table (1007 is the closest prime number to 1000)
 //1007 is enough for the current scale of the program since its more of a personal project (later on could be used for a larger scale)
#define TABLE_SIZE 1007





/**
 * brief class to represent a hash table used to store the games
 */

class hashtable{
    public:
    /**
     * @brief constructor (initializes the hash table pointers)
     */
    hashtable();

    /*
    
    
    
        impelent overloaded constructor to read games from specific file 
        
        
        
        
    */
    //destructor
    //~hashtable();



    private:
    /**
     * @brief file to read from the games
     */
    std::ifstream input;
    /**
     * @brief file to store the games 
     */
    std::ofstream output;

    /**
     * @brief hash table to store nodes for the linked list
     */
    std::array <node*, TABLE_SIZE> game_arr;
    

};