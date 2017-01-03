#ifndef TREE_H
#define TREE_H


class Tree {

    class node{
    public:
      int data;
      node* left;
      node* right;
    };

public:
  node* root;
  node* temp;

  Tree();
  node* Insert_node(node* root,int Add_data);
  node* Delete_node(node* root, int del_data);
  void Print_Tree(node* itr);
  node* Get_NewNode(int newData);
  node* find_min(node* itr);
  bool Is_balanced(node* itr);
  int get_height(node* itr);
  bool Is_BST(node* itr);
  bool Is_subtree_lesser(node* itr , int data);
  bool Is_subtree_Grater(node* itr, int data);

};

#endif
