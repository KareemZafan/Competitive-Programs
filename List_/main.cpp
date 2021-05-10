#include <iostream>
#include <list>

using namespace std;
bool evenNum(int num) ;
int main()
{
   list <int>myList = {1,2,3,4,5,6 , 6} ;

   myList.push_back(123) ;
   myList.push_back(123) ;
   myList.push_back(123) ;
   myList.push_back(123) ;
   myList.push_back(123) ;
   myList.remove(123) ; /*Will add each 123 values in the list */
   myList.unique() ;  /* Will remove all duplicate values */
   myList.remove_if(evenNum) ; /* Removing even Numbers according the function */
   myList.sort() ;
   myList.sort(greater<>()) ;
   for(auto i:myList){
    cout<<i<<"\t" ;

   }




    return 0;
}
bool evenNum(int num) {
  return (num % 2 == 0);
}
