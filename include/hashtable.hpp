#pragma once
#include "color.hpp"
#include "ll.hpp"
#include "videogame.hpp"
#define TABLE_SIZE 1007 //a random prime for better distribution of data and less change of collisions



class hashtable
{
    public:
    /**
     * @brief hash table method used to insert data on each table
     * @param g game to be inserted
     * @param f field to insert
     */
    bool insert(const game& g,field f);


    /**
     * @brief hash function to hash a games field and return the index where it should be inserted
     * @param g the game to be used
     * @param f the field to be hashed
     */
    size_t hash(const game& g,field f);

    /**
     * @brief delete function :deletes data by GameID to ensure safety in data handling.it deletes the data only on the GameID table
     * @param target string to search for deletion 
     */

     bool deleteGame(const std::string& target);

    /**
     * @brief search function used to search all tables to find data based on the given field
     */
    private:
    /**
     * @brief an array to represent the table used for each field
     */
    linkedlist tables[NUMBER_OF_FIELDS];


};
