#include <cstdlib>
#include "List.h"




int main(int argc, char const *argv[]) {

  List t;
  t.AddNode(10);
  t.AddNode(3);
  t.AddNode(5);
  t.AddNode(7);
  t.PrintList();

  t.DeleteNode(71);


  t.PrintList();


  return 0;
}
