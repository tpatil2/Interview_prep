#include <iostream>
#include <string>

using namespace std;



int main(){

  string str="Tejas";

  for(int i=0;i<str.length()-1;i++){
    for(int j=1;j<=str.length()-i;j++){
        std::cout << str.substr(i,j) << '\n';
    }
  }

  return 0;
}
