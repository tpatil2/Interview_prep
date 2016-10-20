#include <iostream>
#define MAX_SIZE 100

int top=-1;
int arr[MAX_SIZE];

using namespace std;


void push(int x){
  if(top > MAX_SIZE-1){
    std::cout << "Error: Stack overflow" << std::endl;
  }
  top++;
  arr[top]=x;
}

void pop(){
  if(top==-1){
    std::cout << "Error: Already Empty Stack" << std::endl;
  }else{
      std::cout << "Element pooped: "<< arr[top] << std::endl;
      top--;
    }
}

bool is_empty(){
  if(top==-1) return true;
  return false;
}


void print(){
  for(int i=0;i<=top;i++){
    std::cout << "|"<<arr[i]<<"|" << std::endl;
  }
}


int main(){

  push(1);
  push(2);
  push(4);
  push(5);
  push(7);
  print();
  pop();
  print();
  push(3);
  push(9);
  push(8);
  pop();
  print();

}
