#include <iostream>
#include <cstdlib>

#include "tree.h"

using namespace std;



Tree::Tree(){
  root=NULL;
  temp=NULL;
  curr=root;
}

Tree t1;

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
  else if(addData >= itr->data){
    itr->right=t1.insert_node(itr->right, addData);
  }
  else if(addData < itr->data){
    itr->left = t1.insert_node(itr->left,addData);
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
