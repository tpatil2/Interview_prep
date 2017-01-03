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
    bool is_balanced(node* itr);
    int max_height(node* itr);
    int check_height(node* itr);
    void level_order_print(node* itr);
    bool is_BST(node* itr);
    void BFS(node* itr);
    node* common_ancesstor_BST(node* itr,int l,int r);
    node* least_com_ans_BT(node* itr,int a,int b);

};



#endif
