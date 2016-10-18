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


void replace_zero(int arr[4][4]){

bool row[4]={false};
bool col[4]={false};

  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      if(arr[i][j] == 0){
        row[i]=true;
        col[j]=true;
      }
      }
    }

      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
          if(row[i]==true || col[j]==true){
            arr[i][j]=0;
          }
          }
        }




}

int main(){

  int arr[4][4]={{1,1,1,1},
                 {1,1,1,1},
                 {1,1,1,1},
                 {0,1,1,1}};

  std::cout << "Array Befor replacement" << std::endl;

  display(arr);

  replace_zero(arr);

  std::cout << "Array after replacement" << std::endl;

  display(arr);

  return 0;

}
