#include <iostream>
#include "ll.hpp"
#include "videogame.hpp"
#include "color.hpp"


int main(void)
{
    node ll;
    game testGame;

    testGame.Game[GameID] = "1";
    testGame.Game[Title] = "Test Game";
    testGame.Game[Publisher] = "Test Publisher";
    testGame.Game[ReleaseYear] = "2021";

    //check for exceptions during memory allocation
    try{
        for(int i = 0; i < 50000; i++)
        {
            ll.insertNode(testGame);
            
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << ERROR << e.what() << RESET << std::endl;
    }
    //search for a game in the list
    if(ll.searchNode("1", GameID))
    {
        std::cout << SUCCESS << "Game found" << RESET << std::endl;
    }
    else
    {
        std::cerr << ERROR << "Game not found" << RESET << std::endl;
    }

    //todo -> implement destroy method to free memory of the current node processed (will be implemented by game ID for safety reasons)
    //to ensure no wrong entries deleted from the list

    ll.deleteNode("1");
    ll.deleteNode("1");
    ll.deleteNode("1");

 return 0;
}