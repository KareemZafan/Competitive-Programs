#include <iostream>
#include <assert.h>
using namespace std;
void dictionary_sort(string []) ;
#define SIZE 5
int main()
{
    string arr[] = {"Kareem","Aya" , "Yassen" , "Wafaa","Mohamed"} ;


    dictionary_sort(arr) ;
    for(int i=0; i<SIZE ; ++i)
    cout<<arr[i]<<'\n' ;

    return 0;
}

void dictionary_sort(string str[])
{
    assert(sizeof(str) != 0 ) ;
    for(int i = 0 ;  i<SIZE-1 ; ++i)
    {
        for(int j = i+1 ; j < SIZE; ++j)
        {
            if(str[i] > str[j])
            {
                string temp = str[i] ;
                str[i] = str[j] ;
                str[j] = temp ;
            }

        }
    }

    return ;
}
