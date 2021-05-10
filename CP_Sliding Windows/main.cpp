#include <iostream>

using namespace std;
#define SIZE 10
int slidingWindowMax(int arr[] , int k , int arr_Size) ;
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}  ;
    cout<<"Max of Sliding Windows = "<<slidingWindowMax(arr,5   ,SIZE)<<endl ;
    return 0;
}

int slidingWindowMax(int arr[] , int k , int arr_Size)
{
   int maxWinSum = 0  ;
   int sum = 0 ;
   /* Sum of the first sliding window */
   for(int i = 0 ; i<k ; ++i)
       sum += arr[i] ;
       maxWinSum = sum ;

       for(int i = 1 ; i<arr_Size-k+1 ; ++i)
       {
           sum = sum - arr[i-1] + arr[i+k-1] ;
           maxWinSum = max(sum ,maxWinSum ) ;
       }
   return maxWinSum ;
}
