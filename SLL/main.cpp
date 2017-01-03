#include<iostream>
#include "list.h"

using namespace std;


int main(){

  List l1;
  l1.Add_Node(1);
  l1.Add_Node(6);
  l1.Add_Node(3);
  l1.Add_Node(7);
  l1.Add_Node(5);
  l1.Add_Node(2);
  l1.Add_Node(4);

  l1.Print_List();
/*  l1.Rev_list();
  std::cout << "After reversing List" << '\n';
  l1.Print_List();
  std::cout << "After removing dupliates" << '\n';
  l1.remove_dup();
  l1.Print_List();
  int k = 0;
  std::cout << k <<"th last element is "<< l1.find_kth_last(k) << '\n';
  */

  std::cout << "List after Partition" << '\n';
  l1.Partition(2);
  l1.Print_List();

  return 0;
}
