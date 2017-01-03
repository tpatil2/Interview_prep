#include <iostream>
#include <climits>

using namespace std;
int main(){

int array[]={1,2,3,4,2,3,5,1,2,3,8,9,2};
int max=0;
int size = sizeof(array)/sizeof(int);

for(int i=0 ;i<size-2;i++ ){
    int sum = array[i]+array[i+1]+array[i+1];
    if(sum>max){
      max=sum;
    }
    std::cout << "Max is: "<< max << std::endl;

  }
  return 0;
}
