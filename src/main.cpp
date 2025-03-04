#include <iostream>
#include "hashtable.hpp"
#include "ll.hpp"
#include "videogame.hpp"
#include "color.hpp"


int main(void)
{
    hashtable test;
    game testGame;
    testGame[Title] = "123";

    test.insert(testGame);
    test.insert(testGame);
    return 0;
}