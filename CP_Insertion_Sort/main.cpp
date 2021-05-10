#include <iostream>
#include<assert.h>
using namespace std;
#define SIZE 10
void insertSort(int arr[] , int _size);
int main()
{
  int arr[] = {5,4,3,2,1 , 0 , -2 , 56 , 8 , 87 , -17 } ;

   insertSort(arr,sizeof(arr)/sizeof(arr[0])) ;
   for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
    cout<<arr[i]<<"\t" ;

    return 0;
}
void insertSort(int arr[] , int _size)
{
    assert(_size > 0 );
    for(int i=1 ; i<_size ; ++i)
    {   int cpdVal = arr[i] ; /* Copy value of i */
        int j = i-1 ;  ;
     for(; j >= 0; --j)
       {
           if(arr[j] < cpdVal)
              break ;
           arr[j+1] = arr[j] ;

       }
       arr[j+1] = cpdVal ;
    }

    return ;
}
