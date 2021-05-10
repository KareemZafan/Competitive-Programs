#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<string>week{{"Sun"} , {"Mon"} , {"Tue"} , {"Wed"} , {"Thus"} , {"Fri"} , {"Sat"} } ;



    for(auto s:week){
       cout<<s<<"  is in bucket #"<<week.bucket(s)<<endl;

    }
    return 0;
}
