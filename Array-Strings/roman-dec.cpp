#include <iostream>
#include <string>

using namespace std;

int get_val(char c){

  if(c=='I') return 1;
  if(c=='V') return 5;
  if(c=='X') return 10;
  if(c=='L') return 50;
  if(c=='C') return 100;
  if(c=='D') return 500;
  if(c=='M') return 1000;

  return -1;
}

int cal_decimal(string &str){

  int res = 0;

  for(int i=0;i<str.length();i++){

        int s1=get_val(str[i]);

    if(i+1 < str.length()){
        int s2 = get_val(str[i+1]);
          if(s1 >= s2){
            res = res + s1;
          }else{
            res=res + s2 -s1;
            i++;
          }
      }else{
        res=res+s1;
      }
  }


  return res;
}


int main(){

  string str ="XDMVII";
    cout << "Integer form of Roman Numeral is "
         << cal_decimal(str) << endl;

  return 0;
}
