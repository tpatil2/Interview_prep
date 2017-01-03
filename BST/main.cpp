#include "tree.h"
#include <iostream>

using namespace std;

int main(){
  Tree t;
  t.root = t.Insert_node(t.root,8);
  t.root = t.Insert_node(t.root,4);
  t.root = t.Insert_node(t.root,2);
  t.root = t.Insert_node(t.root,6);
  t.root = t.Insert_node(t.root,1);
  t.root = t.Insert_node(t.root,3);
  t.root = t.Insert_node(t.root,5);
  t.root = t.Insert_node(t.root,7);
  t.root = t.Insert_node(t.root,16);
  t.root = t.Insert_node(t.root,19);
  t.root = t.Insert_node(t.root,10);
  t.root = t.Insert_node(t.root,13);
  t.root = t.Insert_node(t.root,18);
  t.root = t.Insert_node(t.root,20);

  if(t.Is_BST(t.root)) std::cout << "Tree is BST" << '\n';
  else std::cout << "NOT BST" << '\n';


  t.Print_Tree(t.root);
  t.root = t.Delete_node(t.root,2);
  std::cout  << '\n';
  t.Print_Tree(t.root);
  std::cout << '\n';
  if(t.Is_balanced(t.root)) std::cout << "Tree is balanced" << '\n';

  return 0;
}
