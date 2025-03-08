#include <iostream>
#include "hashtable.hpp"
#include "ll.hpp"
#include "videogame.hpp"
#include "color.hpp"


int main(void)
{
    
    hashtable games;
    game g ;
    g.Game[GameID] = "123";
    g.Game[Title] = "TEST";
    g.Game[ReleaseYear] = "2020";

    games.insert(g);

    return 0;
}