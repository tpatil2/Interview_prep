/*
Given an image represented by an NxN matrix, where each pixel in the image
 is 4bytes, write a method to rotate the image by 90 degrees.
 Can you do this in place
 NOTE: This is not inplace
*/

#include <iostream>
#include <string>


using namespace std;


void display(int buffer[4][4]){

  for(int i=0;i<4;i++){

    for(int j=0;j<4;j++){
      cout<<" "<<"["<<buffer[i][j]<<"]";
    }
    std::cout << "\n";
  }
  std::cout << "\n";

}


void rorate_90(int arr[4][4],int buffer[4][4]){

    for (int i=0; i<4; i++)
    {
       for (int j=0; j<4; j++)
       {
          buffer[j][4-i-1] = arr[i][j];
       }
    }
}

int main(){

  int arr[4][4]={{0,0,0,0},
                 {1,1,1,1},
                 {1,1,1,1},
                 {0,0,0,1}};

  int buffer[4][4]={};

  display(buffer);

  display(arr);

  rorate_90(arr,buffer);

  std::cout << "Array after rotation" << std::endl;

  display(buffer);

  return 0;

}
