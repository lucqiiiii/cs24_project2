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
    void add(value_type fname);
    // observers
    value_type get_fname() const;
    int get_count() const;

private:
    value_type file_name;
    list *next;
    list *prev;
    int count;
};
#endif
