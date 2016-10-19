#include <iostream>
#include <cstdlib>

#include "tree.h"

int main(int argc, char const *argv[]) {

  Tree t;
  t.root = t.insert_node(t.root,7);
  t.root = t.insert_node(t.root,3);
  t.root = t.insert_node(t.root,2);
  t.root = t.insert_node(t.root,4);
  t.root = t.insert_node(t.root,1);
  t.root = t.insert_node(t.root,44);
  t.root = t.insert_node(t.root,12);

  t.print_tree(t.root);

  return 0;
}
