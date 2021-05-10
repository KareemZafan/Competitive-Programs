#include <stdio.h>
#include <stdlib.h>



int main()
{
    union type{
 int a ;
 int b ;
}var;
    printf("%d",var.a) ;
    printf("Hello world!\n");
    return 0;
}
