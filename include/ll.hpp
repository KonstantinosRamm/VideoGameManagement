#pragma once
#include "color.hpp"
#include "iostream"
#include "videogame.hpp"
#include <vector>

/**
 * @brief class used to store the games as a linked list
 * 
 */
class node
{
    public:
    /**
     * @brief constructor: initializes the fields of the node to empty and the pointer to the next node
     */
    node();

    /**
     * @brief insert a game into the linked list
     * 
     * @param GameData the game to be inserted
     * @return true if the game was inserted successfully
     */

    bool insertNode(game& GameData);

    /**
     * @brief search for a node in the linked list
     * @param target the string to be searched for
     * @param field to search
     * @return a vector of the books found
     */
    std::vector<game> searchNode(const std::string& target, field f);

        /**
     * @brief search for a node in the linked list
     * @param target the string to be searched for (based on Game ID to ensure data handling safety)
     * @return true if the ID found else false
     */




    private:
    /** 
     * @brief data about video game
    */
    
    game data;
    /**
     * pointer to next node
     */
    node *next;


};