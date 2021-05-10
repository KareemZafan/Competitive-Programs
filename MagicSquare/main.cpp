#include <iostream>

using namespace std;
enum dir { DOWN = 0  , RIGHT , UP , LEFT , UP_LEFT , DOWN_RIGHT , UP_RIGHT , DOWN_LEFT};
int dir_r[] = {1 , 0 , -1 , 0 , -1 , 1 , -1 , 1 } ;
int dir_c[] = {0 , 1 , 0 , -1 , -1 , 1 , 1 , -1} ;


#define COLS 3
#define ROWS 3
int SumWithDir(int r , int c ,dir Direction , int steps , int arr[ROWS][COLS] ) ;
int main()
{
   int square[ROWS][COLS] = {{1,2,3} , {4,5,6} , {7,8,9}} ;
   cout<<SumWithDir(0 ,1,DOWN , 3 , square) <<endl;


    return 0;
}
int SumWithDir(int r , int c ,dir Direction , int steps , int arr[ROWS][COLS] )
{
       int sum = 0 ;
       for(int i = 0 ; i<steps ; ++i)
       {

           sum += arr[r][c] ;   /* The value of the starting point */
           r   += dir_r[Direction] ;
           c   += dir_c[Direction] ;

       }


    return sum ; /* Returnning the summation of the specified cells */
}
