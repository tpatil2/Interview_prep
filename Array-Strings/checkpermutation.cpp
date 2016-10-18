#include <iostream>
#include <string>

using namespace std;

bool check_perm(string str1,string str2){

  if(str1.length() != str2.length()) return false;

  int ch[256]={0};

  for(int i=0; i<str1.length();i++){
    ch[str1[i]]++;
  }

for(int i=0; i<str2.length();i++){
    ch[str2[i]]--;
    if(ch[str2[i]]<0) return false;
  }

return true;
}

int main(){

  string str1="tejas";
  string str2="tejaspari";

    if(check_perm(str1,str2)){
      std::cout << "it is permutation" << std::endl;
    }else{
      std::cout << "it is not permutation" << std::endl;
    }

  return 0;
}
