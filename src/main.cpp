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
    std::vector <game> found = ll.searchNode("Test Game", Title);


    //test search method 
    for(int i = 0; i < found.size(); i++)
    {
        std::cout << found[i];
    }

    //todo -> implement destroy method to free memory of the current node processed (will be implemented by game ID for safety reasons)
    //to ensure no wrong entries deleted from the list

 return 0;
}