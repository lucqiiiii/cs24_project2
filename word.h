//Qi Guo Project2
#ifndef WORD_H
#define WORD_H
#include <iostream>
#include <cstdlib>
#include "list.h"

using namespace std;

class word
{
public:
    typedef string value_type;

    //Constructor:
    word();

    //Destructor:
    ~word();

    //Modification Member Functions:
    void insert(const value_type& word, const value_type& filename);

    // Observers:
    
    //Constant Member Functions

    private:
        struct dnode{
            value_type info;
            dnode *next;
            dnode *prev;
            list *file_list;
            dnode(value_type w, dnode *n, dnode *p) : info(w), next(n), prev(p), file_list() {}
  
        };

        dnode *head;
};

#endif
