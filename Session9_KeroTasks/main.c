#include <stdio.h>
#include <stdlib.h>

int *fuc(void) ;
int flippedBits(int , int ) ;

int main()
{
//    int *ptr = fuc() ;
//    printf("%d",*ptr+6) ;

    printf("%d ",flippedBits(10 , 15)) ;


    return 0;
}

int *fuc(void)
{
    int a = 10 ;

    return (&a) ;
}

int flippedBits(int A , int B ) {

   int bitsNumber = 0 ;
   int xorResult =  A ^ B ;
   int i = 0 ;
   for(i = 0 ; i < (sizeof(int)*8) ; ++i)
   {
       if((xorResult&1) == 1)   ++bitsNumber ;
       xorResult >>= 1 ;
   }

return bitsNumber ;
}
