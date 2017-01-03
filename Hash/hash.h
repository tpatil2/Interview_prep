#ifndef HASH_H
#define HASH_H
#include <string>
#include <cstdlib>

using namespace std;

class Hash{

private:
  static const int tablesize = 4;
  struct item{
    string name;
    int age;
    item* next;
  };

  item* hashtable[tablesize];

public:
  Hash();
  void Add_item(string name, int age);
  void print_table();
  int hash_function(string key);
  int num_items_bucket(int index);

};


#endif
