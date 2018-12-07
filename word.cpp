//Qi Guo Project2
#include "word.h"
#include <iostream>
using namespace std;

//Constructor
word::word(){
    head = NULL;
}

//Destructor
/*word::~word(){
    dnode *n = head;
    while(n){
        dnode *garbage = n;
        n = n -> next;
        delete garbage;
    }
}
*/
void word::insert(const value_type &word,const value_type &filename){
    if(head == NULL){
        head = new dnode(word,head,head);
        head -> file_list -> add(filename);
    }
    else{
        dnode *n = head;
        if((n -> info) > word){
            dnode *temp = new dnode(word,n,n -> prev);
            n -> prev = temp;
            head = temp;
            return;
        }    
        while((n -> info) < word && n != NULL){ //to get to the spot
            n = n -> next;
        }
        dnode *temp = new dnode(word,n,n -> prev);
        n -> prev -> next = temp;
        n -> prev = temp;
        temp -> file_list -> add(filename);
    }
}

dnode* list_search(const dnode *head, const dnode::value_type target){
    dnode *cursor;
    for(cursor = head; cursor != NULL; cursor = cursor -> next){
        if(target == cursor -> info){
            return cursor;
        }
    return NULL;
}





