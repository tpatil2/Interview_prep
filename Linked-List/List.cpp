#include <cstdlib>
#include <iostream>
#include <stack>

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


void List::reverse_list(){

  stack<node*> mystack;
  temp=head;

  while(temp!=NULL){
    mystack.push(temp);
    temp=temp->next;
  }

  temp=mystack.top();
  head=temp;
  mystack.pop();

  while(!mystack.empty()){
    temp->next=mystack.top();
    mystack.pop();
    temp=temp->next;
  }
  temp->next=NULL;
}

void List::is_palindrome(){

    stack<node*> mystack;

    temp=head;
    while(temp!=NULL){
      mystack.push(temp);
      temp=temp->next;
    }

    temp=head;
    bool flag=true;
    while(!mystack.empty()){
      if(temp->data != mystack.top()->data){
        flag=false;
      }
      temp=temp->next;
      mystack.pop();
    }

    if(flag==true) std::cout << "Linked List is palindrome" << std::endl;
    else std::cout << "Linked List is Not palindrome" << std::endl;
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

void List::find_kth_last(int k){

  curr=head;
  temp=head;
  int i=0;

  while(i<k){
    temp=temp->next;
    i++;
  }

  while(temp->next!=NULL){
    curr=curr->next;
    temp=temp->next;
  }

  std::cout << "found"<<curr->data << std::endl;

}





void List::PrintList(){

  curr=head;
  while(curr!=NULL){
      std::cout << curr->data << std::endl;
      curr=curr->next;
  }
}
