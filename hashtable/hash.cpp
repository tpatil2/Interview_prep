#include <iostream>
#include <string>
#include <cstdlib>

#include "hash.h"

using namespace std;


//constructor for has class to  defalut values
Hash::Hash(){

  for(int i=0 ; i<tablesize;i++){
      hashtable[i] = new item;
      hashtable[i]->name="empty";
      hashtable[i]->drink="empty";
      hashtable[i]->next = NULL;
    }
}

int Hash::hashfunction(string key){
  int hash = 0;
  int index;
  for(int i=0; i<key.length();i++){
    hash=hash+(int)key[i];
  }
  index = hash%tablesize;
  return index;
}


void Hash::add_item(string name, string drink){

  int index = hashfunction(name);
  if(hashtable[index]->name == "empty"){
      hashtable[index]->name = name;
      hashtable[index]->drink = drink;
      hashtable[index]->next = NULL;
  }else{
      item* n = new item;
      n->name = name;
      n->drink = drink;
      n->next = NULL;

      item* itr = hashtable[index];

      while(itr->next != NULL){
        itr=itr->next;
      }
      itr->next = n;
    }
}

int Hash::num_item_bucket(int index){

  int count=0;
  if(hashtable[index]->name == "empty") return 0;
  else{
    count++;
    item* itr = hashtable[index];
    while (itr->next != NULL){
      count++;
      itr=itr->next;
    }
  }
return count;
}

void Hash::print_items_index(int index){

  item* ptr=hashtable[index];

  if(ptr->name == "empty"){
    std::cout << "No items in bucket :" << index << std::endl;
    std::cout << "---------------------------" << std::endl;
  }
  else{
    std::cout << "index : "<< index << "  contains :"<< std::endl;

    while (ptr != NULL) {
      std::cout << "name  " << ptr->name << std::endl;
      std::cout << "drink "<<ptr->drink << std::endl;
      std::cout << "---------------------------" << std::endl;
      ptr=ptr->next;
    }
  }
}

void Hash::remove_item(string name){

    int index=hashfunction(name);
    item* delptr;
    item* p1;
    item* p2;

    //case 1 if its not there = empty
    if(hashtable[index]->name == "empty" && hashtable[index]->drink =="empty"){
      std::cout << "This bucket is empty" << std::endl;
    }// case 2 : if only one item and its matchinf
    else if(hashtable[index]->name == "name" && hashtable[index]->next == NULL){
        hashtable[index]->name = "empty";
        hashtable[index]->drink= "empty";
        std::cout << "item removed form bucket case 2" << std::endl;
    }  //case 3 :  if item and its matching at first location
    else if(hashtable[index]->name == "name"){
        delptr=hashtable[index];
        hashtable[index]=hashtable[index]->next;
        delete delptr;
        std::cout << "item removed form bucket" << std::endl;
    }//case 4: buckrt persent item but not match
    else{
          p1=hashtable[index]->next; // pointing to second item
          p2=hashtable[index];

          while (p1 != NULL && p1->name != name) {
              p2=p1;
              p1=p1->next;
          }
          // not match
          if(p1 == NULL){
            std::cout << "item dosent found in hashtable case 4.1" << std::endl;
          }
          else{//case 4.2 item found
              delptr=p1;
              p1=p1->next;
              p2->next=p1;
              delete delptr;
              std::cout << "item removed form bucket case 4.2" << std::endl;
          }
          // item mathed

    }
}

void Hash::print_table(){

    int number;
    for(int i=0; i< tablesize;i++){
      number=num_item_bucket(i);
      std::cout << "---------------------------" << std::endl;
      std::cout << "Index : " << i << std::endl;
      std::cout << "name "<< hashtable[i]->name << std::endl;
      std::cout << "Drink "<< hashtable[i]->drink << std::endl;
      std::cout << "number of items: "<< number << std::endl;
      std::cout << "---------------------------" << std::endl;

    }

}
