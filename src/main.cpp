#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cctype>
#include "hashtable.hpp"
#include "ll.hpp"
#include "videogame.hpp"
#include "color.hpp"
#include "platform.hpp"


/**
 * @brief checks if a strings is a legit number
 * @param str the string to check 
 * @return true if its a number 
 * 
 */
bool isLegitNumber(const std::string& str);









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
            std::cout << " Enter a keyword : ";
            std::getline(std::cin,keyword_buffer);
            games.searchAllFields(keyword_buffer);

        }//search based on field and keyword
        else if (option_buffer == "5"){
            std::cout << " Enter a keyword : ";
            std::getline(std::cin,keyword_buffer);
            std::cout << std::endl;
            std::cout << "Enter Field: ";
            g.getField();
            std::getline(std::cin,field_buffer);

            //check if number is legit
            if(isLegitNumber(field_buffer))
            {
                //convert string to number and then typecast it to field
                size_t f = std::stoul(field_buffer);

                //since the indexing starts from 0 but for convenience in main program we start from 1 
                //we have to check if its not 0 to substract 1 otherwise we will not get the correct field
                //and if 0 we will get underflow 
                if(f > 0) f--;
                
                games.search(keyword_buffer,static_cast<field>(f));
            }
            

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




bool isLegitNumber(const std::string& str)
{
    //check if string is empty
    if(str.empty())
    {
        return false;
    }

    //iterate in string and check for non digit characters
    for (char c : str)
    {
        if(!isdigit(c))
        {
            return false;
        }
    }

    //final check that the number does not exceed maximum number of fields
    try {
        // Convert string to size_t
        size_t number = std::stoul(str); // Throws out of range or invalid number
        
        // Final check that the number does not exceed maximum number of fields
        // and number is not 0 since we work with size_t and will cause underflow in the main program
        if(number >= NUMBER_OF_FIELDS || number == 0)
        {
            return false;
        }

        // If everything passes
        return true;
    }
    catch (const std::invalid_argument& e) {
        // String does not represent a valid number
        return false;
    }
    catch (const std::out_of_range& e) {
        // Number is out of range for size_t
        return false;
    }

    return true;
}