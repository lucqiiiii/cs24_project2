//Qi Guo Project2
#include "word.h"
#include <iostream>
using namespace std;

//Constructor
word::word(){
    head = NULL;
}

//Destructor
word::~word(){
    dnode *n = head;
    while(n){
        dnode *garbage = n;
        n = n -> next;
        delete garbage;
    }
}

void word::insert(const value_type &word/*,const value_type &filename*/){
    if(head == NULL){
        head = new dnode;
        head -> info = word;
        head -> next = NULL;
    }
    else{
        dnode *n = head;
        while((n -> info) < word){ //to get to the spot
            n = n -> next;
        }
        dnode *temp = new dnode(word,n -> prev,n);
        n -> prev -> next = temp;
        n -> prev = temp;
    }
}

void word::add_word(string word, string filename){
	if(used > capacity){
		cout << "Maximum capacity "<<capacity<< " reached."<<endl;
		return;
	}
	unsigned int i = 0;
	for(i = 0; i < used; i++){
		if(wordlist[i] == word){
			files_word[i].add(filename);
		}
	}	
	if(i == used){
		wordlist[used] = word;
		files_word[used].add(filename);
		used++;
	}
}

int word::get_information(string word) const {
  for(unsigned int i = 0; i < used; i++){
  	if(wordlist[i] == word){
  		cout << "\nHere are the information for " << word << ":\n";
  		if(files_word[i].size() == 1){
  			cout << "There is 1 file that contains "
  			<< word << ".\n";
  			files_word[i].print();
  		}
  		else{
			cout << "There are " << files_word[i].size()
			<< "files that contain " << word << ".\n";
			files_word[i].print();
		}
	return 0;
	}
  }
  cout << "\nThere is no file that contains " << word << ".\n";
  return 0;
}





 
