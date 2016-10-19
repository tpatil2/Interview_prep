#ifndef TREE_H
#define TREE_H


class Tree{

private:

    class node{
    public:
      int data;
      node* left;
      node* right;
    };

public:
    node* root;
    node* temp;
    node* curr;

public:

    Tree();
    node* insert_node(node* itr,int addData);
    void print_tree(node* itr);
    node* create_node(int newdata);
    node* delete_node(node* itr,int delData);
    node* findmin(node* itr);
    node* findmax(node* itr);

};



#endif
