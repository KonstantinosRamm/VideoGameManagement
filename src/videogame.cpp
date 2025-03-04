#include "videogame.hpp"



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
    os << std::endl;
    os << RESET;
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

