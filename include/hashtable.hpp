#pragma once
#include "color.hpp"
#include "ll.hpp"
#include "videogame.hpp"
#include <string>
#include <vector>
#include <cstdint>
#include <fstream>
#define TABLE_SIZE 997 //a random prime for better distribution of data and less change of collisions



class hashtable
{
    public:






    /**
     * @brief constructor for hashtable 
     * 
     */
    hashtable();

    /**
     * @brief destructor 
     * store the changes in the table in Library.txt 
     */
    ~hashtable();

     
    /**
     * @brief hash table method used to insert data on each table
     * @param g game to be inserted
     * @return true if operation succeeded and false if failed
     * 
     */
    bool insert(const game& g);


    /**
     * @brief checks 
     */




    /**
     * @brief delete function :deletes data by GameID to ensure safety in data handling.it deletes the data only on the GameID table
     * @param target string to search for deletion 
     * @return true if operation succeeded and false if failed
     * 
     */

     bool deleteGame(const std::string& target);

    
    /**
     * @brief search function used to search for entries based on given string (it will find all entries with the keyword)
     * @param target the string to be checked for 
     * @return true if operation succeeded and false if failed
     */
    bool searchAllFields(const std::string& target);

    /**
     * @brief search function used to search for entries based on a field and a target string
     * @param target the string to be checked for 
     * @param f field to search
     * @return true if operation succeeded and false if failed
     */
    bool search(const std::string& target,field f);

    /**
     * @brief getter of error_opening_file 
     * checks if file opened sucessfuly to read data of videogames
     * @return true for sucess and false for failure 
     */

    bool OpenedFile();
    /**
     * @brief search function used to search all tables to find data based on the given field
     */
    private:
    /**
     * @brief matrix to represent the table used for each field
     */
    linkedlist table[NUMBER_OF_FIELDS][TABLE_SIZE];




    /**
     * @brief hash function to hash a games field and return the index where it should be inserted
     * @param g the game to be used
     * @param f the field to be hashed
     * @return the index computed during the hash operation
     * 
     */



    size_t hash(const std::string& ID);

    bool error_opening_file;


};
