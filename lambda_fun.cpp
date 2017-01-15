#include<iostream>

using namespace std;



int main(int argc, char const *argv[]) {

  auto somevar =  [](int a,int b)-> int
  {
    //std::cout << "{a+b} = "<< a+b << '\n';
    return a+b;
  };

std::cout <<"a+b = " <<somevar(3,4) << '\n';
return 0;
}
