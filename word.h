//Qi Guo Project2
#ifndef WORD_H
#define WORD_H
#include <iostream>
#include <cstdlib>
#include "bag.h"
using namespace std;

class word
{
public:
    typedef string value_type;

    //Constructor:
    
    //A doubly linked list with each having a 
    //next and prev pointer as NULL and a string and list 
    //including files
    word(const value_type& w = value_type(), word *n = NULL, word *p = NULL)    {
    word = w;
    next = n;
    prev = p;
    }

    //Modification Member Functions:
    
    void set_word(const value_type &w){ word = w; }
    void set_next(word *n){ next = n; }
    void set_prev(word* p){ prev = p; }

    // Observers:

    value_type get_word(){ return word; }
    
    //Forward Links:

    word *next_word(){ return next; }
    const word *next_word(){ return next; }

    //Backword Links:

    word *prev_word(){ return prev; }
    const word *prev_word(){ return prev; }

    //Constant Member Functions
    int get_information(string word) const;

    private:
        value_type word;
        word *next;
        word *prev;
	list *file;
};

//Helper Methods:

word* list_search(word &head, const word::value_type &w){
    word *cursor = head;
    if(cursor == NULL){
        return NULL;
    }
    else{
        while((cursor != NULL) && (cursor -> word() != w)){
            cursor = cursor -> next();
        }
        return cursor;
    }
}

void insert_word(word *&head, word *prev, const word::value_type &w){
    if(prev == NULL){
        word *temp;
        temp = new word(w);
        head = temp;
    }
    else{
        cursor = list_search(head,w);
        if(cursor != NULL){
            update_list(cursor);
        }
        else{
            word *temp;
            temp = new word(w,prev -> next(),prev);
            prev -> set_next(temp);
            temp -> next() -> set_prev(temp);
            update_list(temp);
        }
    }
}

void update_list(const word *w){



}







#endif
