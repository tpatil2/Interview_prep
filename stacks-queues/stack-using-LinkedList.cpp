#include <iostream>
using namespace std;


class node{

public:
  int data;
  node* next;
};

node* top = NULL;

void push(int x){

node* temp = new node;
//Similar to insert at front in link list
temp->data=x;
temp->next=top;
top=temp;
}

void pop(){
node* temp = new node;
if(top==NULL) return;
temp = top;
top=top->next;
delete temp;
}


void print(){

  node* temp = new node;
  temp=top;
  while(temp != NULL){
    std::cout << temp->data << "";
    temp=temp->next;
  }
  std::cout  << std::endl;

}

int main(){


    push(1);  print();
    push(2);  print();
    push(4);  print();
    push(5);  print();
    push(7);  print();
    pop();    print();
    push(3);  print();
    push(9);  print();
    push(8);  print();
    pop();  print();


  return 0;
}
