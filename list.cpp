//Qi Guo Project2
#include "list.h"
#include <iostream>
using namespace std;

//Constructor
list::list(){
    head = NULL;
}

void list::add(const value_type& fname){
    if(head == NULL){
        head = new ldnode;
        (head -> info).set_filename(fname);
        (head -> info).set_count(1);
        head -> next = NULL;
    }
    else{
        ldnode *n = head;
        while(n){
            if((n -> info).filename() == fname){
                (n -> info).set_count((n -> info).count()+1);
                return;
            }
            n = n -> next;    
        }
        n -> next = new ldnode;
        (n -> next -> info).set_filename(fname);
        (n -> next -> info).set_count(1);
        n -> next -> next = NULL;
        n ->next -> prev = n;
        
}

