#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;


int main(){

  string name="tejas patil";
  string str="tiplat jesa";

  bool ch1[256]={false};
  bool ch2[256]={false};

  for(int i=0; i<name.length();i++){
    ch1[name[i]]= true;
  }

  for(int i=0; i<str.length();i++){
    ch2[str[i]]= true;
  }

  for(int i=0; i<256;i++){
    if(ch1[i]!=ch2[i]){
       std::cout << "not anagrams" << std::endl;
       return 0;
    }
  }

  std::cout << "These are anagrams" << std::endl;

  return 0;
}
