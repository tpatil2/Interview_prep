#include <iostream>
#include <cstdlib>

#include "tree.h"

int main(int argc, char const *argv[]) {

  Tree t;

  t.root = t.insert_node(t.root,8);
  t.root = t.insert_node(t.root,4);
  t.root = t.insert_node(t.root,2);
  t.root = t.insert_node(t.root,6);
  t.root = t.insert_node(t.root,1);
  t.root = t.insert_node(t.root,3);
  t.root = t.insert_node(t.root,5);
  t.root = t.insert_node(t.root,7);
  t.root = t.insert_node(t.root,16);
  t.root = t.insert_node(t.root,19);
  t.root = t.insert_node(t.root,10);
  t.root = t.insert_node(t.root,13);
  t.root = t.insert_node(t.root,18);
  t.root = t.insert_node(t.root,20);

  t.print_tree(t.root);
//  t.root = t.delete_node(t.root,7);
  //t.print_tree(t.root);
  if(t.is_balanced(t.root)) std::cout << "balanced" << std::endl;
  else std::cout << "Not bal" << std::endl;

  t.level_order_print(t.root);
  if(t.is_BST(t.root)) std::cout << "ITS BST" << std::endl;
  else std::cout << "ITS NOT BST" << std::endl;
  t.BFS(t.root);

  std::cout << "MAX is " << t.findmax(t.root)->data << std::endl;
  std::cout << "LCA of given nums is"<<t.least_com_ans_BT(t.root,1,20)->data << std::endl;
  return 0;
}
