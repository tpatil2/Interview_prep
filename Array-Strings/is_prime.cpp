#include <iostream>

using namespace std;

bool is_prime(int num){

  for(int i=2;i*i<=num;i++){
    if(num%i==0){
      return false;
    }
  }

  return true;
}

int main(){

  int n = 122;
  cout << "Prime Number" << '\n';
  for(int i=2;i<=n;i++){
    if(is_prime(i)){
      std::cout << i << '\n';
    }
  }

  return 0;
}
