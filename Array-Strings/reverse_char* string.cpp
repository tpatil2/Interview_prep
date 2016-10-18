#include <iostream>
#include <string>

using namespace std;

string rev_cstring(string str){

  int length = str.length();
  int mid = length/2;
  int i=0;
  while (i<mid) {
    char temp = str[i];
    str[i]=str[length-1-i];   //sejat
    str[length-1-i]=temp;
    i++;
  }

return str;
}

int main(){

  string str="litapvsajeT";
  string result=rev_cstring(str);
  std::cout << result << std::endl;

  return 0;
}
