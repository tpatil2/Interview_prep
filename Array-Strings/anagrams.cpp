#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>


using namespace std;

void swap(char* x,char* y){
  char temp;
  temp=*x;
  *x=*y;
  *y=temp;
}

void Find_Anagrams(char* a, int l, int r){

  if(l==r){
    std::cout << a << '\n';
  }

  for(int i=l;i<=r;i++){
    swap((a+l),(a+i));
    Find_Anagrams(a,l+1,r);
    swap((a+l),(a+i));//backtrack

  }

}


int main(){

  char name[] = "tejas";
  int n = strlen(name);
  Find_Anagrams(name,0,n-1);
  return 0;
}
