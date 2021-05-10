#include <iostream>
#include <deque>
using namespace std;
typedef deque<int> dq_i ;

int main()
{

    dq_i mydeq = {1,2,3,4,5,6} ;

    mydeq.push_back(16) ;
    mydeq.push_front(223) ;
  /* Deleting form the start till the end()-1 position */
    mydeq.erase(mydeq.begin(),mydeq.end()-1) ;
    mydeq.emplace(mydeq.begin() , 1300) ;
    /*insert 1300 at the front of the dequeue notice that emplace is faster
    than insert */
    for(auto i:mydeq){    /* For each */
        cout<<i<<endl;
    }

    return 0;
}
