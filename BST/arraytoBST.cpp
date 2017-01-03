#include <iostream>


using namespace std;

class node{
public:
  int data;
  node* left;
  node* right;
};

node* root=NULL;

node* Min_BST(int arr[], int start, int end){

  if(start>end) return NULL;

  int mid = (start+end)/2;
  node* n = new node;
  n->data = arr[mid];
  n->left = NULL;
  n->right = NULL;

  n->left = Min_BST(arr,start,mid-1);
  n->right = Min_BST(arr,mid+1,end);

  return n;


}

void print_tree(node* itr){

  if(itr == NULL) return;
  print_tree(itr->left);
  std::cout << itr->data << '\n';
  print_tree(itr->right);
}


int main(){

  int arr[]={1,2,3,4,5,6,7,8,9,10,11};

  int size;
  size = sizeof(arr)/sizeof(arr[0]);

  root = Min_BST(arr, 0, size-1);
  print_tree(root);




  return 0;
}
