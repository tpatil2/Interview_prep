#include <iostream>
#include <string>
#include <stack>
using namespace std;


bool Chaeck_balanced(string str, int len){

  stack<char> mystack;
  char closed;


  for(int i=0; i<len;i++){

     if(str[i]=='{' || str[i]=='(' || str[i]=='[' ){
       std::cout << "pusheds"<< str[i] << std::endl;
       mystack.push(str[i]);
     }
     else if(str[i]==')' || str[i]==']' ||str[i]=='}' ){

       // setting respectivr pair for pair
       if('(' == mystack.top()) closed = ')';
       else if('[' == mystack.top()) closed = ']';
       else if('{' == mystack.top()) closed = '}';

      if( mystack.empty() || str[i] != closed){
        return false;
      }else{
        mystack.pop();
      }
     }
  }

  if(mystack.empty()) return true;
  else return false;

}


int main(){

  string name = "[{(})]";
  int len = name.length();

  if(Chaeck_balanced(name,len)) std::cout << "Yes Its is balance" << std::endl;
  else cout<<"Its is Not Balnced"<<endl;

  return 0;

}
