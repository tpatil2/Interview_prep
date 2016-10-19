#include <cstdlib>
#include <iostream>

#include "List.h"

using namespace std;


//constructor
List::List(){

  head=NULL;
  curr=NULL;
  temp=NULL;
}

void List::AddNode(int addData){

  node* n = new node;
  n->data = addData;
  n->next = NULL;

  if(head != NULL){
    curr=head;
    while (curr->next != NULL){
          curr=curr->next;
    }
      curr->next=n;
  }else{
    head=n;
  }
}


void List::DeleteNode(int deleteData){

    node* delptr = new node;
    curr=head;
    temp=head;
    bool flag = true;

    if(head != NULL){
      while(flag==true){
      while(curr != NULL && curr->data != deleteData){
        temp=curr;
        curr=curr->next;
      }
      if(curr == NULL){
          std::cout << "Element not found" << std::endl;
          delete delptr;
          flag=false;
      }
      else{
            delptr=curr;
            curr=curr->next;
            temp->next=curr;
            if(delptr==head){
              head=head->next;
              temp=NULL;
            }
            //delete delptr;
            std::cout << "Value is deleted" << std::endl;
            List t2;
      }
     }
    }
}


void List::PrintList(){

  curr=head;
  while(curr!=NULL){
      std::cout << curr->data << std::endl;
      curr=curr->next;
  }
}
