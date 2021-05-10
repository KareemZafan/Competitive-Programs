#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int>::iterator it ;
    set<int>s = {1,2,3,4,5,6} ;

    s.emplace(34) ;
    it = s.begin() ;
    it = s.emplace_hint(it ,234) ; // very fast o(1)
    auto a = s.equal_range(5) ; /* this function will return a pair of two things that */
    cout<<*a.first<<endl<<"###\n"<<*a.second<<endl;

    for(auto i:s){
        cout<<i<<endl;
    }
    return 0;
}
