#include <iostream>

using namespace std;
/* Declaration of a function using default values */
void print (int a ,  int b = 5 , int c = 10) ;
/* Template Functions is used when we need to define a functions
and we don't know the types of a function */

template <class Type>
Type Max(Type a , Type b ) ;


int main()
{
    for(int i = 1 ; i<=100 ; i++)
    {
       if((i%4 == 0 )||((i%6 == 0)&&(i%10 == 0)))
            cout<<i<<endl;

    }
    int iCount = 0 ;
    for(int x = 1 ; x<= 100 ; ++x)
    {
        for(int y = ((x >= 70)? x+1:70); y<= 200 ; ++y) // x must be smaller than y
        {
            if(((x+y)%7==0))
                ++iCount ;
        }
    }
    cout<<"The number is = "<<iCount <<endl;


    /* Different calls of print functions */
      print(1) ;
      print(1,2) ;
      print(1,6,6);
    return 0;
}
void print (int a , int b , int c ){

 cout<<a<<'\t'<<b<<'\t'<<c<<'\n' ;

}

Type Max(Type a , Type b ) {
return ((a>b) ? a : b ) ;
}

