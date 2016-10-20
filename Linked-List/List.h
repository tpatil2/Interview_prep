#ifndef LIST_H
#define LIST_H

class List
{
  private:

      class node{

        public:
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
      void find_kth_last(int k);
      void partition_around(int x);
      void reverse_list();
      void is_palindrome();

};

#endif
