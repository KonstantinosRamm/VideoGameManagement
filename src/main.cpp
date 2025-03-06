#include <iostream>
#include "hashtable.hpp"
#include "ll.hpp"
#include "videogame.hpp"
#include "color.hpp"


int main(void)
{
    std::string x = "12345";
    hashtable t;
    game Game,Game2,Game3;

    Game.Game[GameID] = "123a";
    Game.Game[Title] = "TESTGAME";
    Game.Game[Publisher] = "TESTPUBLISHER";
    Game.Game[ReleaseYear] = "2025";

    Game2.Game[GameID] = "234";
    Game2.Game[Title] = "TESTGAMF";
    Game2.Game[Publisher] = "123";
    Game2.Game[ReleaseYear] = "2020";

    Game3.Game[GameID] = "345";
    Game3.Game[Title] = "TESTGAMG";
    Game3.Game[Publisher] = "123";
    Game3.Game[ReleaseYear] = "2023";

    t.insert(Game);
    t.insert(Game);
    t.insert(Game2);
    t.insert(Game3);

    t.searchAllFields("123");
    t.deleteGame("123");
    t.search("123",GameID);
    
    /* implement search function */

    return 0;
}