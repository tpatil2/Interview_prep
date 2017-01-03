#include <iostream>
#include "hash.h"

using namespace std;

int main(){

  Hash h;
  h.Add_item("Tejas", 25);
  h.Add_item("Tejas", 25);
  h.Add_item("Tejas", 25);
  h.Add_item("Tejas", 25);
  h.Add_item("Rahul", 22);
  h.print_table();

  return 0;
}
