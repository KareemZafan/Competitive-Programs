#include <stdio.h>
#include <stdlib.h>
int mul(int n , int m) ;
int main()
{
   printf("%d ",mul(12,4)) ;
    return 0;
}
int mul(int n , int m) {
 int _count = 0 ;
 int ansVal = 0 ;

 while(m){

    if((m&1) == 1)
        ansVal += n<<_count ;
    _count++ ;
    m /= 2 ;
 }
return ansVal ;
}
