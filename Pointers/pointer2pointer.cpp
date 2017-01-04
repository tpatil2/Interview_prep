#include <iostream>

using namespace std;

// int 4 bytes
//char 1 byte
//float 4 bytes

//lookup table stores variable addss
//pointers are variable that stores address of another variable

int main(){

  int a =4;
  int b =5;
  int *p; // p stores address of integer

  p=&a;
  int** q = &p;;
  int*** r=&q;

  //test on these variable and pointer
  std::cout << "a   "<< a << '\n';
  std::cout << "&a  "<< &a << '\n';
  std::cout << "____________________" << '\n';

  std::cout << "p   "<< p << '\n';
  std::cout << "*p  "<< *p <<  '\n';
  std::cout << "____________________" << '\n';

  std::cout << "q   "<< q << '\n';
  std::cout << "*q  "<< *q << '\n';
  std::cout << "**q "<< **q << '\n';

  std::cout << "____________________" << '\n';


  std::cout << "r   "<< r << '\n';
  std::cout << "*r  "<< *r << '\n';
  std::cout << "**r "<< **r << '\n';
  std::cout << "**r "<< ***r << '\n';




  return 0;
}
