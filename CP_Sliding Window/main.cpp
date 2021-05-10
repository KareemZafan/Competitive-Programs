#include <iostream>
#include<stdlib.h>
#include<algorithm>
#include<assert.h>

using namespace std;
#define SIZE 10
int getMax3Sum(int arr[] ) ;

int main()
{
    int arr[SIZE] ;
    cout<<"\n\n"<<getMax3Sum(arr)<<endl ;
    return 0;
}

int getMax3Sum(int arr[] )
{

    int _3Conseq_Sum = 0 ;
    assert(sizeof(arr) > 0 ) ;
    for(int i = 0 ; i<SIZE ; ++i)
          arr[i] = 1 + rand()%100  ; /* 0----99 */

    sort(arr, arr+SIZE) ;
     for(int i = 0  ; i<SIZE ; ++i)
          cout<<arr[i]<<endl;
    _3Conseq_Sum = arr[SIZE - 1] +arr[SIZE - 2] + arr[SIZE - 3] ;
 return _3Conseq_Sum ;
}
