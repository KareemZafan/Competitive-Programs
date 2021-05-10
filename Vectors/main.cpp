#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi ;
int main()
{

    vi v1 = {1,2,3,4} ;
    v1.push_back(10) ;
    vi::iterator it = v1.begin() ;
    while(it != v1.end())
    {

        cout<<*it<<endl;
        it++ ;
    }

    cout << "###############################\n" ;
    /*Another way to declaring vectors */
    vi v2(5,100) ; // here we declare a int vector of size 5 with default value of 100
    it = v2.begin() ;
    while(it != v2.end())
    {

        cout<<*it<<endl;
        it++ ;
    }

   cout << "###############################\n" ;
    /* swap functions is used to swapping two vectors data */
//     swap(v1 ,v2) ;
//     cout<<v1.at(3)<<endl;
//     cout<<v1.front()<<endl;
//     cout<<v1.back()<<endl;
  /* The main difference between at function and v1[index] is that at(index) can
     throws an exception where is an out of range indexing */

      /* size an capaciy functions */

      cout<<v1.size()<<endl<<v1.capacity()<<endl;
      /* size functions returns the number of the vector elements
      and capacity returns the capacity of the vector to accomodate dynamically
       new elements */

       v1.push_back(12) ;
       v1.push_back(12) ;v1.push_back(12) ;v1.push_back(12) ;

       cout<<v1.size()<<endl<<v1.capacity()<<endl;
       /* Here you can see the difference between capacity and swap function*/


       vi::reverse_iterator r_it = v1.rbegin() ; /* You have to use reverse_iterator
       not original iterator as you want to use rbegin and rend functions */

       while(r_it < v1.rend()){
        cout<<*r_it++<<endl;
        /* there functions called cbegin and cend which need a const iterators to
        traverse the vector */

        /*Using insert function in the vectors */

       /*Notice that emplace and emplace_back functions are faster than
         insert functions */
       /* if you declare a vector with size of 10 elements and then you resized it
        by using resize function this will lead to memory leak and you reserve a memory
        but it does not been used then you have to use shrink_to_fit() to destroy and
        reclaim the overbounded locations in the memory for using */
        v2.shrink_to_fit() ;

       }


    return 0;
}
