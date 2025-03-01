#pragma once
#include <string>
#include <array>
#define NUMBER_OF_FIELDS 4


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
    std::array<std::string, NUMBER_OF_FIELDS> Game;

    /**
     * @brief Overload operator[] to return a string based on the field enum value
     * 
     * @param f the field enum
     * @return the string corresponding to the enum
     */
    std::string& operator [](field f) const;

    
};