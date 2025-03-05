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

    Game.Game[GameID] = "123";
    Game.Game[Title] = "";
    Game.Game[Publisher] = "TEST";
    Game.Game[ReleaseYear] = "2025";

    Game2.Game[GameID] = "123";
    Game2.Game[Title] = "";
    Game2.Game[Publisher] = "123";
    Game2.Game[ReleaseYear] = "2026";

    Game3.Game[GameID] = "";
    Game3.Game[Title] = "";
    Game3.Game[Publisher] = "123";
    Game3.Game[ReleaseYear] = "";


    t.insert(Game);
    t.insert(Game2);
    t.insert(Game3);

    //t.searchAllFields("123");
    //t.deleteGame("123");
    t.search("123",GameID);
    
    /* implement search function */

    return 0;
}