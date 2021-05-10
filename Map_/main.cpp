#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int , string >m={{1,"Lam"} ,{2,"bak"} ,{3,"Keem"}} ;
     map<int ,string>m2 ;
    for(auto a:m){
        cout<<a.first<<"---"<<a.second<<endl;
    }

    /*Notice that we don't have the push_back() so we should use
    insert function */
    m.insert({234,"Saeed"}) ; /* saeed is inserted in the last position */
    /* inserting at the begging */
    m.insert(m.begin() , {23,"Saeed"}) ;
    m[234] = "SaeEd" ;/* you  can modify the map data unlike the set */
    cout<<"--------------------------------\n";
     map<int,string>:: reverse_iterator it = m2.rbegin() ;

     /*for inserting a range from another map */

     m2.insert(m.begin(),m.find(234)) ; /* Insert until you find the 234 key */
     /* emplace_hint() takes an iterator
        and emplace does not take an iterator
        and emplace is faster than insert */

        /* upper_bound and lower_bound functions takes a single parameter
           which the key */
        auto upp_iterator = m2.upper_bound(234) ;
        auto low_iterator = m2.lower_bound(1) ;
        m2.erase(low_iterator , upp_iterator) ;
    while(it != m2.rend()){

       cout<<it->first<<"---"<<it->second<<endl;
       it++ ;
    }
    if(m2.empty())  cout<<"map m2 is empty\n" ;

    /* Multimap  */cout<<"\n\n##########################\n" ;
    multimap<string , string> mp  ;
    mp.insert({"Kareem","CS"}) ;
    mp.insert({"Ahmed","CS"}) ;
    mp.insert({"Kareem","SWE"}) ;
    mp.insert({"Kareem","Embedded"}) ;
    mp.insert({"Yassen","SW"}) ;
   /*Here i can not use [] to access or modify these elements of the
     the data of any key in the multimap container */
       auto edit_val = mp.find("Kareem") ;
       ++edit_val ;
       edit_val->second = "Employee";

    for(auto i:mp){
        cout<<i.first<<"----->"<<i.second<<endl;
    }

    return 0;
}
