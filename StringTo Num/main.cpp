#include <iostream>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
using namespace std;
long long  convStr2Num(const char [] ) ;
int main()
{

     cout<<"The converted value is: "<<convStr2Num("9999999999")<<endl;

    return 0;
}



long long convStr2Num(const char inpString[])
{
    long long  value = 0 ;
    int index  = 0 ;
    assert( inpString != NULL ) ;
     while(inpString[index] != NULL)
     {
         assert (!isalpha(inpString[index])) ;
         value  = value * 10 + (inpString[index] - '0') ;
         index++ ;
     }
    return value ;
}
