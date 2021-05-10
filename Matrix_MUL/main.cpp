#include <iostream>
#include<assert.h>
using namespace std;
#define ROWS1 2
#define ROWS2 2

#define COLS1 2
#define COLS2 2

void MUL_2MAT(int arr1[COLS1][COLS1] , int arr2[ROWS2][COLS2] , int arr3[ROWS1][COLS2]) ;  ;


int main()
{
     int arr1[ROWS1][COLS1] = {{2,3} , {4,5}} ;
     int arr2[ROWS2][COLS2] = {{1,4} , {2,3}} ;
     int arr3[ROWS1][COLS2] ;
     MUL_2MAT(arr1  , arr2 , arr3) ;
     for(int i= 0 ; i<ROWS1 ; ++i)
     {
         for(int j = 0 ; j<COLS2 ; j++)
            cout<<arr3[i][j]<<"\t" ;
           cout<<"\n" ;
      }

    return 0;
}
void MUL_2MAT(int arr1[COLS1][COLS1] , int arr2[ROWS2][COLS2] , int arr3[ROWS1][COLS2])
{
  assert(ROWS2 == COLS2) ;

   for(int i = 0 ; i<ROWS1 ; ++i)
    for(int j = 0 ; j<COLS2 ; ++j)
   {
       arr3[i][j] = 0 ;
   }

    for(int i = 0 ; i<ROWS1 ; ++i)
     for(int j = 0 ; j<COLS2 ; ++j)
      for(int k = 0 ; k<COLS1 ; ++k)
       {
          arr3[i][j] += arr1[i][k] * arr2[k][j] ;


       }
    return ;
}
