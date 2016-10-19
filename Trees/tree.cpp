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


Tree::node* Tree::findmin(node* itr){

  while(itr->left != NULL) itr=itr->left;
  return itr;

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
