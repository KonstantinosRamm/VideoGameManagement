#include "hashtable.hpp"



/*
    TODO: IMPLEMENT MURMUR HASH INSTEAD
*/
size_t hashtable::hash(const game& g,field f)
{

    size_t target_size = g.Game[f].size();
    size_t index = 0;
    //check if empty string
    if (g.Game[f].empty())
    {
        return index;
    }
    for(int i = 0; i < target_size; i++)
    {

        index += static_cast<size_t>(g.Game[f][i]);
    }

    return index % TABLE_SIZE;
}


//Insert method
bool hashtable::insert(const game& g)
{
    bool result = false;
    //hash the index based on field 
    size_t index = 0;

    //iterate over number of fields and insert each hashed field to each table
    for(int i = 0; i < NUMBER_OF_FIELDS; i++)
    {
        
        //check if the entry is empty
        if(g.Game[i] != EMPTY)
        {
            //calculate the index 
            index = hash(g,static_cast<field>(i));
            result = this->table[static_cast<field>(i)][index].insert(g);
        }
    }
    return result;
}


