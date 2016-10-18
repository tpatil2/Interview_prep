#include <iostream>
#include <string>

using namespace std;

string compress_string(string str){

  string str2="";
  int count=0;
  char set=str[0];

  for(int i=0;i<str.length();i++){

    while(str[i]==set && i<str.length()){
      count++;
      i++;
    }
    str2 += str[i-1];
    str2.append(to_string(count));
    set=str[i];
    count=0;
    i--;
  }

  if(str.size() < str2.size()){
    return str;
  }
  else {
    return str2;
  }

}


int main(){

  string str = "aabcccccaaa";
  cout<<"output is: "<<compress_string(str)<<endl;

  return 0;
  }
