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
     * @brief insert method to insert in linked list
     * @param gthe game to be inserted
     */
    bool insert(game &g);

    private:
    /**
     * @brief head is a dummy node used to provide an easy entry point in the linked list 
     */
    node head;
};