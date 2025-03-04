#pragma once
#include "color.hpp"
#include "iostream"
#include "videogame.hpp"
#include <vector>

/**
 * @brief struct to represent singly linked list
 */
struct node{
    game data;
    node *next;
};
/**
 * @brief class used to store the games as a linked list
 * 
 */


class linkedlist
{
    public:
    /**
     * @brief constructor for the linked list
     */
    linkedlist();
    /**
     * @brief destructor for the linked list
     */
    ~linkedlist();

    /**
     * @brief method used to delete data based on GameID to ensure safety in data handling since Game id is unique for each game
     * @param g game to be deleted (requires the game to have GameID field)
     */

    bool deleteNode(game &g);

    /**
     * @brief method used to search if a node exists based on a given field
     * @param target string of the target we search for 
     * @param id the field to search for
     */
    bool searchNode(std::string target,field f);
    /**
     * @brief insert method to insert in linked list
     * @param g game to be inserted
     */
    bool insert(const game &g);

    private:
    /**
     * @brief head is a dummy node used to provide an easy entry point in the linked list 
     */
    node head;
};