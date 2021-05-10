#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void check_strings(const char *s1 , const char *s2 , int (*checkptr)(const char* , const char *) ) ;
int main()
{
    int(*comPtr) (const char* , const char*) ;
    char a[10] , b[10] ;
    /* Pointer to strcmp function (entry of the function) */
    comPtr = strcmp ;
    gets(a) ;
    fflush(stdin) ;
    fflush(stdout) ;
    gets(b) ;
    check_strings(a,b, comPtr);










    return 0;
}
void check_strings(const char *s1 , const char *s2 , int (*checkptr)(const char* , const char *) )
{
   if(!checkptr(s1,s2)) printf("Equal\n");
   else printf("Not equal\n") ;
}
