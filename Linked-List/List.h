#ifndef LIST_H
#define LIST_H




class List
{
  private:
      struct node{
        int data;
        node* next;
      };

      node* curr;
      node* temp;
      node* head;

  public:
      List();//constructor
      void AddNode(int addData);
      void DeleteNode(int deleteData);
      void PrintList();

};





#endif
