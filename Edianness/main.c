#include <stdio.h>
#include <stdlib.h>

int main()
{
    long word = 0xABCD1FDD ;
    char *ptr = (char*) &word ;
     unsigned char i = 0 ;
     for(i = 0 ; i<4 ; i++)
        printf("%2x  ",(long)ptr[i]) ;
     puts(" ");
    return 0;
}
