//============================================================================
// Name        : MaxSequence2.cpp
// Author      : Kareem 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;


int maxSequ(int [] , int , int*);

int main(void)
{
    int arr[10] = {5,5,5,53 ,0,0,0,0,0,0} ;
    int val = 0 ;
  maxSequ(arr , 10 , &val) ;
  cout<<"("<<val<<","<<maxSequ(arr , 10 , &val) <<")"<<"\n";

    return 0;
}

int maxSequ(int arr[] , int SIZE , int *num)
{
    int sequenceCount = 1 ;
    int maxSeq = 0 ;
    int val = 0 ;

    for(int i=1 ; i < SIZE; ++i)
    {
        if(arr[i] == arr[i-1])
        {
            sequenceCount++ ;

        }else {sequenceCount = 1 ; }
         if(maxSeq <= sequenceCount)
        {
            maxSeq = sequenceCount ;
            val = arr[i-1] ;
        }

 }
      *num = val ;

    return maxSeq ;   /* Maximum sequence will be returned */
}
