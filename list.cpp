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
        head = new ldnode(fname,head,head);
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
        ldnode *temp = new ldnode(fname,n,n -> prev);
        n -> prev -> next = temp;
        n -> prev = temp;
    }
}

