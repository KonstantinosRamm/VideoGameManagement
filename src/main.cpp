#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include "hashtable.hpp"
#include "ll.hpp"
#include "videogame.hpp"
#include "color.hpp"
#include "platform.hpp"



int main(void)
{
    hashtable games; 
    //check if Library file read was successfull
    if(games.notOpenedFile())
    {
        std::cerr << ERROR << "[ERROR] Error occured while opening file" << RESET ;
        return 1;
    }


    game g;
    std::string option_buffer;
    std::string field_buffer;
    std::string keyword_buffer;

    while(true)
    {
        //clear buffers to ensure no input from the previous options still in the buffer
        option_buffer.clear();
        field_buffer.clear();
        keyword_buffer.clear();

        //print menu
        std::cout << TITLE << "--------------------------------VIDEO GAME MANAGEMENT------------------------------" << RESET << std::endl;
        std::cout << OPTIONS << "1)INSERT\n2)DELETE\n3)PRINT\n4)SEARCH KEYWORD\n5)SEARCH FIELD\n6)EXIT\nOPTION:" << RESET;
        std::getline(std::cin,option_buffer);


        //use of if conditions is nessecary since std::string does not supported in switch statements
        //insert
        if(option_buffer == "1"){
            g.readGame();
            if(!games.insert(g))
            {
                std::cerr << ERROR << "[ERROR] game already exists" << RESET << std::endl;
            }
            g.clear();
        }//delete
        else if (option_buffer == "2"){
            std::cout << "Enter Game ID : " ;
            std::getline(std::cin,keyword_buffer);
            if(!games.deleteGame(keyword_buffer))
            {
                std::cerr << ERROR << "[ERROR] game not found" << RESET << std::endl;
            }
        }//print
        else if (option_buffer == "3"){
            games.printTable();
        }//search keyword
        else if (option_buffer == "4"){

        }//search based on field and keyword
        else if (option_buffer == "5"){

        }//exit
        else if (option_buffer == "6"){
            return 0;
        }//invalid option
        else{
            std::cerr << ERROR << "[ERROR] INVALID OPTION" << RESET << std::endl;
        }






        //pause program until next iteration
        std::cout << std::endl << INFO << "Press enter to continue ..." << RESET << std::endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore input until enter pressed
        system(CLEAR);


    }
return 0;
}