#include <stdio.h>
#include <stdlib.h>
#define SIZE 15
void bubbleSort(int [], int _Size) ;
void inserElement(int *arr,  int size, int elementPosition, int elementValue) ;
void swap(int *a, int *b) ;
int main(void)
{
    /* Assume that size large so that you can add elements freely */
    int arr[SIZE] = {1,2,3,4,5 , 6 , 7 , 8, 9 , 10} ;

//     for(int i = 0 ; i < SIZE; ++i)
//     {
//         scanf("%d",&arr[i]) ;
//     }
//     /* Sorting */
//     bubbleSort(arr , SIZE) ;
//     printf("########## Sorted Array ##############\n") ;
//     for(int i = 0 ; i < SIZE ; ++i)
//     {
//         printf("%d\n",arr[i]) ;
//     }
//
//    return 0;
//}
//
//void bubbleSort(int arr[] , int _Size)
//{
//    /* Ascending Sort */
//    for(int i = 0 ; i < _Size - 1 ; ++i)
//    {
//        for(int j = i + 1 ; j < _Size ; ++j)
//        {
//            if ( arr[i] > arr[j]  )
//            {
//                swap(&arr[i] , &arr[j]) ;
//            }
//        }
//
//    }

    inserElement(arr,SIZE,5, 10) ;
    for(int i= 0 ; i<SIZE ; ++i )
    {
        printf("%d   ",arr[i]) ;
    }

    return ;
}

void swap(int *a, int *b)
{
// Swapping using Addition and subtraction
    *a = *a + *b ;
    *b = *a - *b ;
    *a = *a - *b ;
    return 0;
}


void inserElement( int *arr,  int size, int elementPosition, int elementValue)
{
    int temp1  = 0 ;
    int temp2  = 0 ;

    for(int i = 0 ; i < size ; ++i)
    {

        if( i == (elementPosition - 1) )
        {
            temp1 = arr[i+1] ;
            arr[i+1] = elementValue ;
        }
        else if( i > (elementPosition - 1) )
        {
            temp2    = arr[i+1] ;
            arr[i+1] = temp1 ;
            temp1    = temp2  ;
        }

    }

    return ;
}
