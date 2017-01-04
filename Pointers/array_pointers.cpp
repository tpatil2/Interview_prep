#include <iostream>

using namespace std;

// int 4 bytes
//char 1 byte
//float 4 bytes

//lookup table stores variable addss
//pointers are variable that stores address of another variable

void double_val(int a[]){ // int *a  array alwayas pass by reference

    for(int i=0;i<6;i++){
        a[i]=2*a[i] ;
    }

    std::cout << '\n'<<"----------------"<<'\n';

}


int main(){

  int a[]={1,2,3,4,5,6};

    double_val(a);

  for(int i=0;i<6;i++){
    std::cout << a[i] << ' ';
  }
  std::cout << '\n';
  return 0;
}
