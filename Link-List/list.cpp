#include <iostream>

using namespace std;

class List{

public:

  class node{
  public:
      int data;
      node* next;
  };

public:
  node* head;
  node* temp;
  node* curr;

 List();

  void Add_node(int val);
  void Print_List();
  void Delete_node(int val);
  node* Get_NewNode(int val);
  void Rev_List();

};

//constructor
List::List(){
  head = NULL;
  temp = NULL;
  curr = NULL;
}

List::node* List::Get_NewNode(int val){

  node* n = new node;
  n->data = val;
  n->next = NULL;

return n;
}

void List::Rev_List(){

  /*
        temp
  NULL<-1  2->3->4->5->NULL
           c  t2
  temp=NULL

  NULL<-1<-2<-3<-4<-5
                    h
                    */
  curr=head;
  temp=NULL;
  node* temp2;

  while (curr!=NULL) {
    temp2=curr->next;
    curr->next=temp;
    temp=curr;
    curr=temp2;
  }

  head=temp;

}
void List::Delete_node(int val){

  curr=head;
  temp=head;

  if(head==NULL){
      //std::cout << "ERROR::List is Empty" << '\n';
    return;
  }
  else{
      while(curr!=NULL && curr->data != val){
          temp=curr;
          curr=curr->next;
      }
      if(curr==NULL){
         std::cout << "ERROR::Element does not present OR end of list" << '\n';
         return;
      }
      if(curr==head){
        head=head->next;
        delete curr;
        }else{
          temp->next = curr->next;
          delete curr;
        }
      }
      Delete_node(val);
}


void List::Add_node(int val){
  curr = head;
  //If List is empty

  if(head == NULL){
    head = Get_NewNode(val);
  }
  else{
    while (curr->next != NULL) {
          curr=curr->next;
    }
    curr->next = Get_NewNode(val);
  }
}


void List::Print_List() {
  curr=head;
  if(curr != NULL){
    while (curr != NULL) {
          std::cout <<curr->data << '\n';
          curr=curr->next;
        }
    }else{
      std::cout << "PRINT ERROR::List is Empty" << '\n';
    }
}


int main(){

  List l1;
  l1.Add_node(1);
  //l1.Print_List();
  //l1.Delete_node(1);
  //std::cout << "After deleting" << '\n';
  //l1.Print_List();
  l1.Add_node(2);
  l1.Add_node(3);
  l1.Add_node(4);
  //l1.Delete_node(1);
  l1.Print_List();
  l1.Rev_List();
  std::cout << "After Reversing" << '\n';
  l1.Print_List();

  return 0;
}
