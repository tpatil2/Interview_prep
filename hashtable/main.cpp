#include <iostream>
#include <string>
#include <cstdlib>

#include "hash.h"

using namespace std;


int main(int argc, char const *argv[]) {

  Hash h;
  h.add_item("tejas","coffee");
  h.add_item("Aditya","lemonide");
  h.add_item("Pinak","sugar");
  h.add_item("john","smotthe");
  h.add_item("amit","juice");
  h.add_item("nitin","water");
  h.add_item("sagar","tea");
  h.add_item("ram","soda");
  //h.print_items_index(1);
  //h.print_items_index(2);
 //h.print_items_index(3);

  //h.print_items_index(0);

  h.remove_item("tejas");
  std::cout << "after removing" << std::endl;
  h.print_table();
//  h.print_items_index(2);




  return 0;
}
