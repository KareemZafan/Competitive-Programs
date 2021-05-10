#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    pair<int , string>p = make_pair(1123, "kareem"); /* Construct a pair */
    /* you initialize this pair without using make_pair() by using usual practice */

    cout<<p.first <<endl ;
    cout<<p.second <<endl;
    /* pair like a structure you can benefit from it with using it with vectors */
    vector <pair<string,int>>vp ;
    vp.push_back(make_pair("Ahmed",1234)) ;
    vp.push_back(make_pair("Yassen",1)) ;

    vp.push_back({"Aya",34}) ;
    vector<pair<string,int>>::iterator it = vp.begin() ;
    for(; it != vp.end() ; it++)
    {
         cout<<it->first<<"\t"<<it->second<<endl;

    }

    return 0;
}
