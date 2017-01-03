#include <iostream>

using namespace std;

long long  factorial(int a){
  long long  fact = a;
  if(a == 0) return 1;
  fact = fact*factorial(a-1);
  return fact;
}


int main(){

    std::cout << "Factorial of 100 is "<< factorial(9)<< std::endl;

  return 0;
}
