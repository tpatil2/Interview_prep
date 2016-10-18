#include <iostream>
#include <string>

using namespace std;

bool check_bool(string str){

  int ch[256]={0};

  for(int i=0;i<str.length();i++){
    ch[str[i]]++;
    if(ch[str[i]]>1) return false;
  }
  return true;
}

int main(){

  string str="tejass";

  if(check_bool(str)){
    std::cout << "unique string" << std::endl;
  }else{
    std::cout << "not unique" << std::endl;
  }

  return 0;
}
