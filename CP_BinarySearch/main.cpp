#include <iostream>
#include<algorithm>
#include<assert.h>
using namespace std;
typedef unsigned int u16 ;
#define SIZE 10
int  binarySearch(int [] , u16 siz , int searchKey) ;
int main()
{
    int arr[] = {10 , 20 ,60 , 2 , 4 , 5 , -1 , 6  , 3 , 0} ;
    cout<<"The required element is in Index No: "<<binarySearch(arr,SIZE,60)<<endl;
    return 0;
}


int binarySearch(int arr[] , u16 siz , int searchKey)
{
    assert(siz > 0 && (searchKey >= arr[0])) ;
    sort(arr,arr+siz) ;   /* Sorting the array first */
    u16 lowIndex = 0 ;
    u16 highIndex = siz - 1  ;
    u16 midIndex = (lowIndex + highIndex) / 2  ;

    while(lowIndex <= highIndex ) /* = must be exist for including the last element */
    {
        midIndex = (lowIndex + highIndex) / 2  ;
        if(searchKey > arr[midIndex])
            lowIndex = midIndex + 1 ;
        else if(searchKey < arr[midIndex])
            highIndex = midIndex - 1 ;
        else return midIndex ;
    }

   return -1 ; /* specify failure */
}
