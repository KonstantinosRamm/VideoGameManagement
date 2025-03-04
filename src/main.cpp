#include <iostream>
#include "hashtable.hpp"
#include "ll.hpp"
#include "videogame.hpp"
#include "color.hpp"


int main(void)
{
    std::string x = "12345";
    hashtable t;
    game Game;
    Game.Game[GameID] = "123";
    Game.Game[Title] = "";
    Game.Game[Publisher] = "";
    Game.Game[ReleaseYear] = "2025";
    t.insert(Game);
    t.insert(Game);
    t.deleteGame("123");
    /* implement search function */

    return 0;
}