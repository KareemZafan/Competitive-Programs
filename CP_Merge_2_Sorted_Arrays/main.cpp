#include <iostream>
#include <algorithm>
#include <assert.h>
using namespace std;
#define SIZE1   10
#define SIZE2   10
#define SIZE3   20
void merge_2_sorted_arrays(int arr1[] , int arr2[] , int res[], int , int , int ) ;
int main()
{

     int arr1[SIZE2]  = {1,2,3,45,5 , 56 , 6, 4 , 67 , 90 } ;
     int arr2[SIZE2] = {-1 ,12,13,14 , 15 , 16 , 0 , 18 , 19 , 20} ;
     int res[SIZE3] ;
    sort(arr1, arr1+SIZE1) ;
    sort(arr2, arr2+SIZE2) ;
    merge_2_sorted_arrays(arr1 , arr2 , res , SIZE1 , SIZE2 , SIZE3) ;
    for(int i = 0; i<SIZE3; ++i)
        cout<<res[i]<<'\t' ;
}

void merge_2_sorted_arrays(int arr1[] , int arr2[] , int res[] , int siz1 , int siz2 , int siz3 )
{

    assert(siz3 > siz1 && siz3 > siz2) ;
    int index1   = 0 ;
    int index2   = 0 ;
    int indexRes = 0 ;

    while(index1 < siz1 && index2 < siz2)
    {
        if(arr1[index1] < arr2[index2])
            res[indexRes++] = arr1[index1++] ;
         else
             res[indexRes++] = arr2[index2++] ;
    }
    while(index1 < siz1 )
        res[indexRes++] = arr1[index1++] ;
    while(index2 < siz2)
        res[indexRes++] = arr2[index2++] ;

    return ;
}
