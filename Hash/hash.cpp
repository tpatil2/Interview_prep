#include <iostream>
#include "hash.h"
#include <string>

using namespace std;

Hash h1;
//Class Constructor
Hash::Hash(){
  //initilize empty hash table
  for(int i = 0; i<tablesize;i++){
    hashtable[i] = new item;
    hashtable[i]->name = "empty";
    hashtable[i]->age = 0;
    hashtable[i]->next = NULL;
  }
}


int Hash::hash_function(string key){
  int index;
  index = (int)key[0]%tablesize;
  return index;
}

void Hash::Add_item(string name, int age){

    int index = h1.hash_function(name);

    if(hashtable[index]->name == "empty"){
      hashtable[index]->name = name;
      hashtable[index]->age = age;
      hashtable[index]->next = NULL;
    }
    else{

      item* n = new item;
      n->name = name;
      n->age = age;
      n->next = NULL;

      item* itr = hashtable[index];

      while(itr->next!=NULL){
        itr=itr->next;
      }
      itr->next = n;
    }

}

void Hash::remove_item(string r_name){

  int index = hash_function(r_name);
  item* n = new item;
  n=hashtable[index];
  item* temp;
  while(n != NULL && n->name != r_name){
    temp=n;
    n=n->next;
  }

  if(n == NULL){
    std::cout << "element not present" << '\n';
  }else{
    temp->next=n->next;
    delete n;
    std::cout << r_name <<" is removed" << '\n';
  }




}

int Hash::num_items_bucket(int i){
  int count=0;

  item* n = new item;
  n=hashtable[i];
  while (n!=NULL) {
    count++;
    n=n->next;
  }

  return count;
}
void Hash::print_table(){

  for(int i = 0; i<tablesize;i++){
    item* n = new item;
    n= hashtable[i];
  while(n != NULL){
    std::cout << i << " : "<<  n->name <<"->"
    << n->age  << " ";
      n=n->next;
    }
    std::cout << '\n';
  }

}
