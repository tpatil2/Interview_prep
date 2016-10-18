#include<iostream>
#include<string>

using namespace std;

bool is_substring(string s1, string s2){

  string str = s1+s1;
  size_t found = str.find(s2);
  
  if(found < str.length()){
    return true;
  }

return false ;
}

int main(){

  string s1="waterbottle";
  string s2="erbottlewat";

if(is_substring(s1,s2)) std::cout << "yes" << std::endl;
else std::cout << "No" << std::endl;


  return 0;
}
