#include <iostream>

using namespace std;
int interpolationSearch(int arr[] , int key , int _size) ;
int main()
{
    /* Interpolation Search is an efficient search for sorted uniformly arrays
     like 1 2 3 4 5 6 .....
     1 3 5 7 ...
     using the following equation
      pos = low + ((key-a[low])/(a[high]-a[low]))*(high-low)  ;
      by it you will get the right index of the element you search in an
      O(1) instruction otherwise it will take time but less binary search if it is not uniformly
      sorted O(log(logn)) */
      int arr[] = {1 ,3 , 5 , 7 , 9 , 11 } ;
      cout<<"The required element is in Index No: "<<interpolationSearch(arr,6,(unsigned int )(sizeof(arr)/sizeof(arr[0]))) ;
    return 0;
}
int interpolationSearch(int arr[] , int key , int _size)
{
    int low = 0 ;
    int high = _size - 1  ;
    while(
        (low <= high)&&(arr[low] <= key)
        && (key <= arr[high])
    ){
       int pos = low + (((key - arr[low])/(arr[high] - arr[low]))*(high - low)) ;
        if(key > arr[pos])
             low = pos + 1 ;
        else if(key < arr[pos])
            high = pos - 1 ;

        else return pos ; /* the right position */
    }

return -1 ; /* Indication of the failure */
}
