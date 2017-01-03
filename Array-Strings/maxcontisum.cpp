#include <iostream>
#include <climits>

using namespace std;
int main(){

int array[]={-2, -3, 4, -1, -2, 1, 5, -3};
int max_so_far=0;
int curr_max=0;
int size = sizeof(array)/sizeof(int);

for(int i=0 ;i<size;i++ ){

        curr_max = max(array[i], curr_max+array[i]);
        max_so_far = max(max_so_far, curr_max);


          /*
            curr_max += array[i];
            if(curr_max<0) curr_max=0;
            if(curr_max>max_so_far) max_so_far = curr_max;
            */

    std::cout << "curr _Max is: "<< curr_max << std::endl;
    std::cout << "Max is: "<< max_so_far << std::endl;
  }
  return 0;
}
