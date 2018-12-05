//Qi Guo Project2
#ifndef WORD_H
#define WORD_H
#include <iostream>
#include <cstdlib>
#include "list.h"
#include "dnode.h"
using namespace std;

class word
{
public:
    typedef string value_type;

    //Constructor:
    word();

    //Modification Member Functions:
    void insert(const value_type& word);

    // Observers:
    value_type get_word(){ return word; }
    
    //Constant Member Functions

    private:
        dnode *head;
        list* file_list;
};

#endif
