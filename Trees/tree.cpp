#include <iostream>
#include <cstdlib>
#include <queue>

#include "tree.h"

using namespace std;


Tree::Tree(){
  root=NULL;
  temp=NULL;
  curr=root;
}

Tree t1;


Tree::node* Tree::common_ancesstor_BST(node* itr,int l, int r){

  if(itr->data >l && itr->data > r){
    itr = common_ancesstor_BST(itr->left,l,r);
  }else if(itr->data < l && itr->data <r){
    itr = common_ancesstor_BST(itr->right,l,r);
  }else return itr;
}


Tree::node* Tree::least_com_ans_BT(node* itr,int a,int b){

        // case 0 when root is NULL
        if(itr == NULL) return NULL;
        //case 2 when root itself is given node
        if(itr->data == a || itr->data == b) return itr;
        //case 3
        node* left = least_com_ans_BT(itr->left,a,b);
        node* right =least_com_ans_BT(itr->right,a,b);
        //given elements persent on two differetn sides
        if(left != NULL && right != NULL){
          return itr;
        }
        // elements not present
        if(left == NULL && right == NULL){
          return NULL;
        }

        return left != NULL? left : right;
}


Tree::node* Tree::create_node(int newdata){

    node* newnode = new node;
    newnode->data=newdata;
    newnode->left=NULL;
    newnode->right=NULL;

  return newnode;
}

Tree::node* Tree::insert_node(node* itr, int addData){

  if(itr==NULL){
    itr=t1.create_node(addData);
  }
  else if(addData <= itr->data){
    itr->left=t1.insert_node(itr->left, addData);
  }
  else if(addData > itr->data){
    itr->right = t1.insert_node(itr->right,addData);
  }

return itr;

}


void Tree::BFS(node* itr){

    queue<node*> visited;
    if(itr==NULL) return;

    visited.push(itr);

    while(!visited.empty()){

        temp=visited.front();
        visited.pop();
        std::cout << temp->data << std::endl;
        if(temp->left != NULL) visited.push(temp->left);
        if(temp->right != NULL) visited.push(temp->right);

    }
}


Tree::node* Tree::findmin(node* itr){

  while(itr->left != NULL) itr=itr->left;
  return itr;

}



int Tree::max_height(node* itr){
if(itr!=NULL) {
    return max(max_height(itr->left),max_height(itr->right))+1;
  }
}


Tree::node* Tree::findmax(node* itr){

  while(itr->right != NULL) itr=itr->right;
  return itr;
}


int Tree::check_height(node* itr){

if(itr==NULL) return 0;
std::cout << "itr->data"<< itr->data << std::endl;
int leftheight = check_height(itr->left);
if(leftheight == -1) return -1;
int rightheight = check_height(itr->right);
if(rightheight==-1) return -1;

int diff= leftheight - rightheight;

if(abs(diff) > 1){
    return -1;
  }
  else{
    return (1+max(leftheight,rightheight));
  }
}


bool Tree::is_balanced(node* itr){

  if (check_height(itr) == -1) {
    std::cout << "is not bal" << std::endl;
    return false;
  } else {
    std::cout << "is balanced" << std::endl;
  return true;
  }

}


/*
bool Tree::is_balanced(node* itr){

  if(itr==NULL) return 0;

    int diff = t1.max_height(itr->left) - t1.max_height(itr->right);
    if(abs(diff) > 1){
      std::cout << "NOT balanced" << std::endl;
      return 0;
    }else{
      return is_balanced(itr->left) && is_balanced(itr->right);
    }
}*/


void Tree::level_order_print(node* itr){


  if(itr==NULL) return;
  queue<node*> q1;
  queue<node*> q2;

  q1.push(itr);

  while (!q1.empty() || !q2.empty()) {

    while (!q1.empty()) {
      std::cout << q1.front()->data << " ";
      if(q1.front()->left != NULL) q2.push(q1.front()->left);
      if(q1.front()->right != NULL)  q2.push(q1.front()->right);
      q1.pop();
    }
    std::cout << std::endl;

    while (!q2.empty()) {
      std::cout << q2.front()->data << " ";
      if(q2.front()->left != NULL) q1.push(q2.front()->left);
      if(q2.front()->right != NULL)  q1.push(q2.front()->right);
      q2.pop();
    }
    std::cout<< std::endl;


  }

}

bool Tree:: is_BST(node* itr){

if(itr == NULL) return true;
if(itr->left->data  <=  itr->data) return true;
if(itr->right->data >  itr->data) return true;

return is_BST(itr->left)  && is_BST(itr->right);

}


Tree:: node* Tree::delete_node(node* itr, int delData){

  if(itr==NULL) return itr;
  else if(delData > itr->data) itr->right=t1.delete_node(itr->right, delData);
  else if(delData < itr->data) itr->left=t1.delete_node(itr->left,delData);
  else{
      //left and right are null
      if(itr->left ==NULL && itr->right == NULL){
        delete itr;
        itr=NULL;
      }//if only left child
      else if(itr->left == NULL){
          temp=itr;
          itr=itr->right;
      }//if only roght child in NULL
      else if(itr->right == NULL){
          temp = itr;
          itr=itr->left;
      }//if both are not NULL
      else if (itr->left != NULL && itr->right != NULL){

            temp=findmin(itr->right);
            itr->data=temp->data;
            itr->right=t1.delete_node(itr->right,temp->data);
      }
    }

  return itr;
}


void Tree::print_tree(node* itr){

  if (itr!=NULL) {
    t1.print_tree(itr->left);
    std::cout << itr->data << std::endl;
    t1.print_tree(itr->right);
  }
}
