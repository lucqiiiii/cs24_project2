#ifndef LIST_H
#define LIST_H
#include <cstdlib>
#include <iostream>
#include "itemtype.h"
using namespace std;

class list
{
public:
    typedef string value_type;
    // constructor
    list();
    // modifiers
    void add(const value_type& fname);
    // observers
    value_type get_fname() const;
    int get_count() const;

private:
    struct ldnode{
        itemtype info;
        ldnode *next;
        ldnode *prev;
        ldnode(itemtype f, ldnode *n, ldnode *p) : info(f),  next(n), prev(p) {}
    };
    ldnode *head;
 
};
#endif
