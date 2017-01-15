#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

vector <int> arr = {1,2,3,4,5,6};
double sum = 0;

for_each(begin(arr),end(arr),[&](int x){
  sum +=x;
} );

std::cout << "sum "<<sum << '\n';

  return 0;
}
