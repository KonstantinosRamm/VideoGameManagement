#pragma once
#include <string>
#include <array>
#include "color.hpp"
#include <iostream>
#define NUMBER_OF_FIELDS 4
const std::string EMPTY = "";//defined as std::string since defining by macro causes issues to conditional comparisons


/**
 * @brief enum used to make the program more dynamic and expandable in future
 * 
 */
enum field{
    GameID = 0,
    Title,
    Publisher,
    ReleaseYear
};



/**
 * @brief struct to represent game it consists of an array of strings,each string representing a field
 * 
 */
struct game{

    /**
     * @brief constructor for videogame struct
     */
    game();
    /**
     * @brief Game an array of NUMBER_OF_FIELDS fields used to store the game 
     */
    std::array<std::string, NUMBER_OF_FIELDS> Game;

    /**
     * @brief Overload operator[] to return a string based on the field enum value
     * 
     * @param f the field enum
     * @return the string corresponding to the enum
     */
    std::string & operator [](field f);

    /**
     * @brief Overload operator<< to print the game data
     * @param os instance of ostream object (std::cout)
     */
    friend std::ostream& operator << (std::ostream& os,const game & g);




    
};