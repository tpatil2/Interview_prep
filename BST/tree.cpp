#include <iostream>
#include <algorithm>
#include "tree.h"

using namespace std;

Tree t2;

Tree::Tree(){
    root = NULL;
}

Tree::node* Tree::Get_NewNode(int newData){

  node* newNode = new node;
  newNode->data = newData;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

int Tree::get_height(node* itr){
  if(itr == NULL) return 0;
  return max(get_height(itr->left), get_height(itr->right))+1;

}

// checks for all nodes in right subtree are greater tahn root
bool Tree::Is_subtree_Grater(node* itr, int data){
    if(itr == NULL) return true;

    if(itr->data > data
      && Is_subtree_Grater(itr->left, data)
      && Is_subtree_Grater(itr->right, data)){
        return true;
      }
      else{
        return false;
      }

}

bool Tree::Is_subtree_lesser(node* itr, int data){

    if(itr == NULL) return true;

    if(itr->data <= data
    && Is_subtree_lesser(itr->left, data)
    && Is_subtree_lesser(itr->right, data)){
      return true;
    }
    else{
      return false;
    }
}

bool Tree::Is_BST(node* itr){

  if(itr == NULL) return true;

  if(Is_subtree_lesser(itr->left, itr->data)
    && Is_subtree_Grater(itr->right,itr->data)
    && Is_BST(itr->left)
    && Is_BST(itr->right)){
      return true;
    }else{
      return false;
    }
}

bool Tree::Is_balanced(node* itr){

  if(itr == NULL) return true;

  int diff;
  diff = get_height(itr->left) - get_height(itr->right);

  if(abs(diff) > 1){
    return false;
  }else{
    // recurse remainig Tree
    return Is_balanced(itr->left) && Is_balanced(itr->right);
  }

}


Tree::node* Tree::Insert_node(node* itr, int Add_data){

  if(itr == NULL){
    itr = t2.Get_NewNode(Add_data);
    return itr;
  }else if(Add_data <= itr->data ){
    itr->left = Insert_node(itr->left,Add_data);
  }else{
    itr->right = Insert_node(itr->right,Add_data);
  }
  return itr;
}

Tree::node* Tree::find_min(node* itr){
  while(itr->left!=NULL) itr=itr->left;
  return itr;
}

/*
Tree::node* Tree::Sucessor(node* n){
  //min of right sub tree
  // check if right subtree  exists
  if(n->right != NULL){
    return min_of_subtree(n->right); // ie leftmost node
  }else{
    node* q = n;
    node* x = q.parent;
    while ( x!=NULL && q != x->left){
        q=x;
        x=q->parent;
    }
    return x;
  }
}

Tree::node* Tree::predcessor(node* n){
  //max of left subtree
  //check if left subtree exists
  if(n->left !=NULL){
    return max_of_subtree(n->right);
  }else{
    node* q = n;
    node* x = n->parent;
    while(q!=NULL && q!=x->right){
        q=x;
        x=q->parent;
      }
    return x;
    }
}


// time complexity id O(n)
Tree::node* Tree::lca(node* root, node n1, node n2){

      if(root==NULL) return NULL;

      if(root == n1 !! root==n2){
      return root;
    }

      node* left = lca(root->left, n1,n2);
      node* right = lca(root->right , n1,n2);

        //non null form both side
      if(left != NULL && right != NULL) return root;
      //element not found
      if(left == NULL && right == NULL) return NULL;

      return left != NULL ? left : right;
}


// check if t2 is subtree of the large tree t1
bool Tree::Is_subtree(Node* t1, node* t2){

  if(t2 == NULL){
  retun true;
  }
  if(t1 == NULL){
  retun false;
  }
  //check for root values
  if(t1->data == t2->data){
    //check of their subtrees are same
    if(Is_subtree(t1->left, t2->left) && Is_subtree(t1->right,t2,right))
    retun true;
  }else{
  retun Is_subtree(t1->left, t2) || Is_subtree(t1->right, t2);
}


}


*/

Tree::node* Tree:: Delete_node(node* itr , int del_data){
    //search the node
    if(itr ==  NULL) return itr;
    else if(del_data < itr->data) itr->left = Delete_node(itr->left,del_data);
    else if(del_data > itr->data) itr->right = Delete_node(itr->right,del_data);
    else{//data is found
      //leaf node
      if(itr->left == NULL && itr->right == NULL){
        delete itr;
        itr = NULL;
        return itr;
      }//only right child
      else if(itr->left == NULL){
        temp = itr;
        itr=itr->right;
        return itr;
      }//only left child
      else if(itr->right == NULL){
        temp = itr;
        itr=itr->right;
        return itr;
      }//it has both childs
      else if(itr->left != NULL && itr->right != NULL){
        temp = find_min(itr->right);
        itr->data = temp->data;
        //delete duplicate node in right subtree
        itr->right = t2.Delete_node(itr->right,temp->data);
        return itr;
      }

    }
}

void Tree::Print_Tree(node* itr) {

  if(itr != NULL){
    t2.Print_Tree(itr->left);
    std::cout << itr->data <<" ";
    t2.Print_Tree(itr->right);
  }
}
