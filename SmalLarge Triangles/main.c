#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void BubbleSort( triangle *tr, int size ) ;
float getArea(triangle tr)
{
     float p = ((tr.a + tr.b + tr.c) / 2.0 );
     return  ((float) sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c))) ;
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    BubbleSort(tr, n) ;

}
void BubbleSort(triangle *tr, int size )
{

   for(int i = 0 ; i < size - 1 ; ++i )
   {
       for(int j = i + 1 ; j < size ; ++j)
       {
           if(getArea(tr[i]) > getArea(tr[j]) ){
                triangle temp = tr[i] ;
                tr[i] = tr[j] ;
                tr[j] = temp ;
             }
       }
   }
}


int main()
