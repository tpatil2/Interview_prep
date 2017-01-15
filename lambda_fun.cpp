#include<iostream>

using namespace std;



int main(int argc, char const *argv[]) {

  int k = 10;

  auto somevar =  [=](int a,int b)-> int
  {
    //std::cout << "{a+b} = "<< a+b << '\n';
    return a+b+k;
  };

std::cout <<"a+b = " <<somevar(3,4) << '\n';
return 0;

}
