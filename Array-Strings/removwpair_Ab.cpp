#include <iostream>
#include <string>

using namespace std;

int main(){

  string str = "";

  int len = str.length();
  string result = "";

  for(int i=0; i<len;i++){
    int diff = (str[i+1] - str[i]);
    if(diff==32){
      i++;
    }else{
      result += str[i];
    }

    }

  std::cout << "result is: "<< result << '\n';
  return 0;
}
