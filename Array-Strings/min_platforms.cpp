#include<iostream>
#include<algorithm>
using namespace std;

// Returns minimum number of platforms reqquired
int findPlatform(int arr[], int dep[], int n)
{
  sort(arr,arr+n);
  sort(dep,dep+n);

  int platforms = 1, result =1;
  int i=1,j=0;
  //initially one plane is arrived
  while(i<n && j<n){

    if(arr[i] < dep[j]){//which means we need new platfor
      platforms++;
      if(result < platforms){
        result=platforms;
      }
      i++;
    }else{//we have open one platform
      platforms--;
      j++;
    }
  }

   return result;
}

// Driver program to test methods of graph class
int main()
{
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Minimum Number of Platforms Required = "
         << findPlatform(arr, dep, n)<<endl;
    return 0;
}
