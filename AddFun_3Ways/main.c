#include <stdio.h>
#include <stdlib.h>
typedef enum {INT , FLOAT , DOUBLE} dataType ;
typedef enum {STRUCT ,UNION, VOID} operationManner;

typedef struct
{
    int intData ;
    float floatData ;
    double doubleData ;
} stData ;

typedef union
{
    int intData ;
    float floatData ;
    double doubleData ;

} unData ;
/* This function will do the Addition operation in three ways of coding
  Input: operand 1,2 , result all of them are void pointers , type of the operation
  Output :Nothing
  */
void add(void *ptr1 , void *ptr2 , void *resPtr , dataType optype , operationManner way) ;
int main()
{
    int s = 10 ;
    int b  = 15 ;
    int res = 0 ;
    stData strucOP1 = {1, 2.9 , 3.3} ;
    stData strucOP2 = {21, 2.0 , 3.0} ;
    stData result =   {0, 0.0 , 0.0} ;
   add((void*)&strucOP1 , (void*)&strucOP2 , (void*)&result ,INT ,STRUCT) ;

    printf("%d ",result.intData) ;



    return 0;
}

void add(void *ptr1 , void *ptr2 , void *resPtr , dataType optype, operationManner way )
{
    switch(way)
    {
//    case UNION:
//        switch(optype)
//        {
//        case INT:
//            unPtr->intData = (unData*)ptr1->intData + (unData*)ptr2->intData ;
//            break ;
//        case FLOAT:
//            (unData*)resPtr->floatData = (unData*)ptr1->floatData + (unData*)ptr2->floatData ;
//            break ;
//        case DOUBLE:
//            (unData*)resPtr->doubleData = (unData*)ptr1->doubleData + (unData*)ptr2->doubleData ;
//            break ;
//        }
//        break ;
    case VOID :
        switch(optype)
        {
        case INT :
            *(int*)resPtr = *(int*) ptr1 + *(int*)ptr2 ;
            break ;
        case FLOAT :
            *(float*)resPtr = *(float*) ptr1 + *(float*)ptr2 ;
            break ;
        case DOUBLE :
            *(double*)resPtr = *(double*) ptr1 + *(double*)ptr2 ;
            break ;
        }
        break ;
    case STRUCT:
        switch(optype)
        {
        case INT:
            (stData*)resPtr->intData = (stData*)ptr1->intData + (stData*)ptr2->intData ;
            break ;
        case FLOAT:
            (stData*)resPtr->floatData = (stData*)ptr1->floatData + (stData*)ptr2->floatData ;
            break ;
        case DOUBLE:
            (stData*)resPtr->doubleData = (stData*)ptr1->doubleData + (stData*)ptr2->doubleData ;
            break ;
        }
        break ;
     default : break ;
     break ;
    }

}



