/*
Write a method to replace all spaces in a string with'%20'. You may assume
that the string has sufficient space at the end of the string to hold the
additional characters, and that you are given the "true" length of the
string.
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void replace_spaces(char* str1, int length){

  int newlength, spaces=0;
    for(int i=0;i<length-1;i++){
        if(str1[i]==' '){
          spaces++;
        }
    }
    //set new length
    newlength=length+spaces*2;
    str1[newlength]='\0';

    for(int i=length-1;i>0;i--){
      if(str1[i]==' '){
        str1[--newlength]='0';
        str1[--newlength]='2';
        str1[--newlength]='%';
      }else{
        str1[--newlength]=str1[i];
      }
    }

  return;

}

int main(){

  char str1[]="Mr John Smith";
  int length = strlen(str1);
  replace_spaces(str1,length);
  std::cout << "Output is : "<<str1<< std::endl;
  return 0;
}
