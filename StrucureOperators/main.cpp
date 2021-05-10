#include <iostream>
#include<algorithm>
using namespace std;
struct Employee{
 string name ;
 double salary ;

  bool operator ()(const Employee &a , const Employee &b)
  {
      if (a.name != b.name)
      return a.name < b.name ;
      return a.salary < b.salary ;
  }
};
int main()
{
    Employee emp[3] = { {"Kareem",70}  , {"Aya",90} , {"Yassen",55} } ;
     sort(emp,emp+3 , Employee() ) ;
     for(int i=0 ; i<3 ; ++i)
        cout<<emp[i].name<<"\t"<<emp[i].salary<<"\n";


//  bool cmp3 = emp[0] > emp[1] ;   Error as we don't define it





    return 0;
}
