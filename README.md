# VideoGameManagement

## Project Description
Developed a video game management system using C++ that efficiently manages video game data through insertion, deletion, and search functionalities. The system employs multiple hash tables—one for each field of the video game data—for more advanced and efficient searching. I implemented custom data structures, including hash tables and linked lists, to practice and reinforce my understanding of core data structures. Additionally, I implemented the Murmur32 hash function to optimize hash table operations.

The system is designed with the goal of enabling users to search for a game or a keyword based on a given field, or to search for all entries containing the exact keyword. This allows for flexible and powerful search capabilities across various fields in the database.

## Description
* game: A data structure used to represent a video game, implemented as an array of strings. This allows for future expansions, where more fields can be added to represent additional game properties. Each index in the array corresponds to a specific field of the game, which can be accessed either directly via an integer index or more clearly using an enum (field).

* field: An enum used to represent the fields of a game. Currently, it includes GameID, Title, Publisher, and ReleaseYear. This enum helps to ensure that the fields are accessed in a more readable way, instead of relying on raw integer indices, making the code more maintainable and less error-prone.

* linkedlist class: A class used to represent a linked list, supporting basic operations like insertion, deletion, and traversal. It consists of a node head, which is the starting point of the linked list, and each node contains data (in this case, a game object) and a pointer to the next node in the list. This class allows dynamic handling of the game entries, providing efficient memory usage when working with a variable number of entries.

* hash table: A data structure used to store and retrieve video game data efficiently. It is implemented as a matrix of linked lists, where the number of rows corresponds to the number of fields (such as GameID, Title, Publisher, and ReleaseYear), and the number of columns corresponds to the table_size. Each linked list in the matrix handles a bucket for a specific hash index. This structure enables advanced and optimized search functionality across various attributes of the video game data. The hash table uses the Murmur32 hash function for fast lookups and collision resolution. The design ensures that no duplicate GameID entries are allowed, providing unique identification for each game entry.

* main.cpp: Implements a simple menu system that allows users to interact with the video game management system. The menu provides options for inserting, deleting, and searching for video games based on specific fields. The user is prompted to enter data, and the program responds accordingly by utilizing the custom data structures to manage and manipulate the data efficiently.

## challenges faced so far
* Segmentation faults during insertion and deletions to linked lists  -  Solution:extensive debugging and testing with the use of both print statements (where possible) and debugger
* A way to delete fields with a safe way without deleting unwanted entries  -  Solution:Delete by GameID since its unique and that way we ensure not unwanted data deleted
* Prevented potential security risks by enforcing strict user input validation to avoid malicious alterations of the data  -  Solution:User is required to insert GameID during the insertion of a game since it always be unique ,also ensured no out of bonds fields accessed of the game array
* Duplicate entries during reading from Library.txt  -  Solution: Added extra check during the insertion operation to ensure not duplicate GameID is allowed and since GameID is always required then there is no possibility of the same duplicate

## Technologies Used
* C++
* CMake
* Linked Lists
* Hash Tables
* Murmur32 hashing
* File I/O
* Object-Oriented Programming
* Debugging


## Prerequisites
Before you can compile and run this program, you need to have the following installed:
- **CMake** (version 3.10 or higher)
- **g++** (GNU C++ compiler C++17 standard)
# How to compile:
```bash
git clone https://github.com/KonstantinosRamm/VideoGameManagement.git
```

```bash
cd VideoGameManagement
```

```bash
mkdir build && cd build
```

```bash
cmake .. && make
```

# How to run:

```bash
./bin/VideoGameManagement
```

# Additional Notes
* If this is the first time running the program you will get :[ERROR] Error occured while opening file.This is because the Library file that is used to store the games is not initialized yet.after that you can rerun and you should be good to go.







