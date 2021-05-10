#include <iostream>

using namespace std;
#define SIZE 10
int maxSequence(int [] , int , int*);

int main(void)
{
    int arr[SIZE] = {0,0,0,1,1,7,7,3,3,3} ;  /*There is a problem if i have a two equal sequence */
    int val = 0 ;
    maxSequence(arr , SIZE , &val) ;
    cout<<"("<<val<<","<<maxSequence(arr ,SIZE, &val) <<")"<<"\n";

    return 0;
}

int maxSequence(int arr[] , int siz , int *num)
{
    int sequenceCount = 1 ;
    int maxSeq = 0 ;
    int val = arr[0] ;

    for(int i=1 ; i < siz; ++i)
    {

        if(arr[i] == arr[i-1])
        {
            sequenceCount++ ;

        }
        else
        {
            sequenceCount = 1 ;
        }
        if(maxSeq <= sequenceCount)
        {
            maxSeq = sequenceCount ;
            val = arr[i-1] ;
        }
    }
    *num = val ;

    return maxSeq ;   /* Maximum sequence will be returned */
}
