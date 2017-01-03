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


void sprial_print(int arr[4][4], int m,int n){

  int t,b,l,r,dir=0;//0right  1down 2left  3 UP
  t=0,b=m-1,l=0;r=n-1;

  while (l<=r && t<=b) {
    if(dir==0){
      for(int i=l ; i<=r ;i++){
        std::cout << arr[t][i] << std::endl;
      }
      t++;
      }
    else if(dir==1){
      for(int i=t ; i<=b ;i++){
        std::cout << arr[i][r] << std::endl;
      }
      r--;
      }
  else if(dir==2){
      for(int i=r ; i>=l ;i--){
        std::cout << arr[b][i] << std::endl;
      }
      b--;
      }
  else if(dir==3){
      for(int i=b ; i>=t ;i--){
        std::cout << arr[i][l] << std::endl;
      }
      l++;
      }

      dir=(dir+1)%4;
    }
  return;
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

  int arr[4][4]={{1,2,3,4},
                 {12,13,14,5},
                 {11,16,15,6},
                 {10,9,8,7}};

  std::cout << "Array Befor replacement" << std::endl;

  display(arr);

  replace_zero(arr);

  std::cout << "Array after replacement" << std::endl;

  display(arr);
  std::cout << "Spiral Print  :" << std::endl;
  sprial_print(arr,4,4);

  return 0;

}
