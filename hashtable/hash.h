#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

#ifndef HASH_H
#define HASH_H


class Hash{

private:
      static const int tablesize=4;

      struct item{
        string name;
        string drink;
        item* next;
      };

      item* hashtable[tablesize];

public:
    Hash();
    int hashfunction(string key);//this finction will return index
    void add_item(string name, string drink);
    int num_item_bucket(int index);
    void print_table();
    void print_items_index(int index);
    void remove_item(string name);
};

#endif
