#ifndef LIST_H
#define LIST_H


class List{

private:

    class node {
    public:
      int data;
      node* next;
    };

  public:
    node* head;
    node* curr;
    node* temp;

public:
    List();
    void Add_Node(int AddData);
    void Print_List();/* message *//* message */
    void Delete_Node(int Del_Data);
    void Rev_list();
    void remove_dup();
    int find_kth_last(int k);
    void Partition(int x);

};

#endif
