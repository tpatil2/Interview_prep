#include <iostream>
#include "hash.h"

using namespace std;

int main(){

  Hash h;
  h.Add_item("Tejas", 25);
  h.Add_item("Ramesh", 27);
  h.Add_item("Ganesh", 22);
  h.Add_item("John", 43);
  h.Add_item("Rahul", 33);
  std::cout << "Num if Items : "<< h.num_items_bucket(0)<< '\n';
  h.print_table();
  h.remove_item("John");
  h.print_table();
  return 0;
}
