# VideoGameManagement

## Project Description
Developed a video game management system using C++ that efficiently manages video game data through insertion, deletion, and search functionalities. The system employs multiple hash tables—one for each field of the video game data—for more advanced and efficient searching. I implemented custom data structures, including hash tables and linked lists, to practice and reinforce my understanding of core data structures. Additionally, I implemented the Murmur32 hash function to optimize hash table operations.

The system is designed with the goal of enabling users to search for a game or a keyword based on a given field, or to search for all entries containing the exact keyword. This allows for flexible and powerful search capabilities across various fields in the database.


## challenges faced so far
* Segmentation faults during insertion and deletions to linked lists  -  Solution:extensive debugging and testing 
* A way to delete fields with a safe way without deleting unwanted entries  -  Solution:(Delete by GameID since its unique)
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
If this is the first time running the program you will get :[ERROR] Error occured while opening file.This is because the Library file that is used to store the games is not initialized yet.after that you can rerun and you should be good to go.

```bash
./bin/VideoGameManagement
```







