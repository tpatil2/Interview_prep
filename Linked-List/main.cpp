#include <cstdlib>
#include "List.h"




int main(int argc, char const *argv[]) {

  List t;
  t.AddNode(10);
  t.AddNode(3);
  t.AddNode(8);
  t.AddNode(5);
  t.AddNode(7);
  t.PrintList();
  t.find_kth_last(1);

  return 0;
}
