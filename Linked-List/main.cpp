#include <cstdlib>
#include "List.h"
#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {

  List t;
  t.AddNode(1);
  t.AddNode(3);
  t.AddNode(8);
  t.AddNode(9);
  t.AddNode(10);
  t.PrintList();
  t.find_kth_last(1);
//  t.reverse_list();
  t.rev_iterative(t.head);

  std::cout << "after reversing" << std::endl;
  t.PrintList();
  t.is_palindrome();
  return 0;
}
