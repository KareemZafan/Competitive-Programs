#include <iostream>
#include <assert.h>

using namespace std;
#define SIZE 7
int Delete_element(int [] , int  , int) ;
int solveJoseph(int arr[] , int key ,int SIZ);
int main(void)
{
    int arr[10] = {1,2,3,4,5,6,7} ;

    cout<<solveJoseph(arr,3,SIZE) ;


    return 0;
}



int solveJoseph(int arr[] , int key ,int SIZ){
    int res = 0 ;
     for(int i=1 ;i<SIZ ; i++)
        res = (res+key)%i ;


return res  ; }

