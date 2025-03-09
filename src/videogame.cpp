#include "videogame.hpp"

//implement here to avoid conflicts during compilation
std::array<std::string,NUMBER_OF_FIELDS> fieldToString = {
    "GameID","Title","Publisher","ReleaseYear"
};

std::string & game::operator [](field f)
{
    return Game[static_cast<int>(f)];
}

std::ostream& operator<<(std::ostream& os, const game& g)
{
    os << SUCCESS;
    for (int i = 0; i < NUMBER_OF_FIELDS; i++)
    {
        os << g.Game[i] << " ";
        
    }
    
    os << RESET << std::endl;
    return os;
}




//constructor
game::game()
{
    for(int i = 0; i < NUMBER_OF_FIELDS; i++)
    {
        this->Game[i] = EMPTY;
    }
}


void game::readGame()
{
    std::string field_buffer;

    for(int i = 0; i < NUMBER_OF_FIELDS; i++)
    {

        std::cout << "[INFO] enter field " << fieldToString[i] << " : " << RESET; 
        std::getline(std::cin,this->Game[i]);
        //ensure GameID is inserted
        // Ensure GameID (the first field) is inserted
        if (i == 0) // Check if it's GameID field
        {
            while (this->Game[i].empty())  // Check if GameID is empty
            {
                std::cerr << ERROR << "[ERROR] Game ID is a required field!" << RESET << std::endl;
                std::cout << "[INFO] Enter field " << fieldToString[i] << ": " << RESET;
                std::getline(std::cin, this->Game[i]);  // Prompt again until it's not empty
            }
        }

    }
}


void game::clear()
{
    for(int i = 0; i < NUMBER_OF_FIELDS; i++)
    {
        this->Game[i] = EMPTY;
    }
}

