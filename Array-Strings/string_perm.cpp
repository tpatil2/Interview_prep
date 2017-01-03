#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>

using namespace std;

void swap(char* j, char* k){

    char temp;
    temp=*j;
    *j=*k;
    *k=temp;

}

void find_perm(char *a, int l,int r){

      if(l==r){
          cout << a << '\n';
      }
      else{
        for(int i=l;i<=r;i++){
          swap((a+l),(a+i));
          find_perm(a,l+1,r);
          swap((a+l),(a+i));
        }
      }
}

int main(){

    char str[] = "AAA";
    int n = strlen(str);
    find_perm(str, 0, n-1);
    return 0;
}
