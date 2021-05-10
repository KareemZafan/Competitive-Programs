#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
int main()
{
   vi v1(5) ;
   vi:: iterator it = v1.begin() ;
   while(it < v1.end())
   {
       cin>>*it ;
       it++ ;


   }
   sort(v1.begin() , v1.end() ) ; /* Sort function will take two parameters
   first refers to the begging of the sort and the second refers to the end of the sort */
   reverse(v1.begin() , v1.end()) ;
   cout<<"----------------------\n" ;
    it = v1.begin() ;
    /** \brief
     *
     * for each
     *
     */
      /*Here we will sort this vector from the begging to until the min_element of this vecor */
      v1 = {5 ,1 ,2, 7 ,0 , 3} ;
      auto minElement = min_element(v1.begin() , v1.end()) ;

      sort(v1.begin(),minElement) ;
      v1.reserve(10) ; /* Specifies that the vector contain
      at least 10 elements */
    for(auto i:v1){
        cout<<i<<endl;}
        v1.insert(v1.begin() , 233) ;
        cout<<v1.front()<<endl;
        cout<<v1.capacity()<<endl;
       /* Notice that erase() functions could take single or two parameter
          if single it will earse single element specified by its offset
            and if two they will be beginning and ending offsets */



    return 0;
}
