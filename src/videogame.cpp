#include "videoGame.hpp"



std::string & game::operator [](field f) const
{
    return game[static_cast<int>(f)];
}


