#include <iostream>
#include "list.h"

using namespace std;

List::List(){
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::Add_Node(int AddData){

  node* newNode = new node;
  newNode->data=AddData;
  newNode->next=NULL;

  curr=head;
  if(head==NULL){
    head = newNode;
  }else{
    while(curr->next != NULL){
        curr=curr->next;
    }
    curr->next=newNode;
  }
}

//time complexity is O(n^2) space O(1)
void List::remove_dup(){

    if(head==NULL) return;
    curr = head;
    node* slowptr;

    while(curr != NULL){
        //update pointers
        slowptr= curr;
        temp= curr->next;

        while(temp != NULL){
            // check for duplicates
          if(curr->data == temp->data){

              node* deleNode = new node;
              deleNode = temp;
              temp=temp->next;
              slowptr->next=temp;
              temp=slowptr;
              delete deleNode;
          }
          slowptr=temp;
          temp=temp->next;
        }
        curr=curr->next;
    }
}


void List::Partition(int x){

  node* head1 = head;
  node* tail1 = head;

  curr = head;

  while(curr!=NULL){
    temp = curr->next;
    if(curr->data < x){
      curr->next = head1;
      head1 = curr;
    }
    else{
      tail1->next = curr;
      tail1 = curr;
    }
    curr = temp;
  }
  tail1->next = NULL;
  head = head1;

}

void List::Rev_list(){

  curr=head;
  temp=head;

  temp=curr->next;
  curr->next=NULL;
  //reversing the link in opposit direction
  while (temp != NULL) {
    node* temp2 = new node;
    temp2=temp->next;
    temp->next=curr;
    curr=temp;
    temp=temp2;
  }

    head=curr;
}

int List::find_kth_last(int k){

  node* fastptr;
  node* slowptr;
  fastptr = head;
  slowptr=head;
  // 1->3->4->5->3->3->3->NULL
  //             s        f
    if(head==NULL || k==0) return -1;

    for(int i=0; i<k ;i++){
      fastptr=fastptr->next;
    }

    while (fastptr!=NULL) {
        fastptr=fastptr->next;
        slowptr=slowptr->next;
    }

  return slowptr->data;
}

void List::Delete_Node(int Del_Data){
    curr=head;

    //If list is empty
    if(head==NULL){
      std::cout << "List is Empty Node can not be deleted" << '\n';
    } //only head
    else if(head->data == Del_Data && head->next == NULL){
      delete(head);
    }else if(head->data == Del_Data && head->next != NULL){
      temp=head;    //first node
      head=head->next;
      delete temp;
    }
    else{
      while(curr->data != Del_Data && curr->next != NULL){
          temp=curr;
          curr=curr->next;
      }
      if(curr->data == Del_Data){
        temp->next=curr->next;
        delete(curr);

      }else{
        std::cout << "element not found" << '\n';
      }
    }
    delete temp;
}


void List::Print_List(){
    curr=head;
    if(head == NULL){
      std::cout << "List is Empty" << '\n';
    }else{
      while(curr != NULL){
        std::cout << "data is :"<<curr->data << '\n';
        curr=curr->next;
      }
    }
}
