#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main()
{
   /* SStream used to take single parts from string  to be a individual variables */
    string data = "Kareem 10 2.4" ;
    int iNum ;
    double dNum ;
    string sName ;

    istringstream iss(data);
    iss>>sName>>iNum>>dNum ;
    cout<<iNum<<endl;
    cout<<dNum<<endl;
    cout<<sName<<endl;
    /*-------------------------------------------------------------------------------------*/

    /******************* Input Validation ************************/
    /* We have three fincution to use cin.fail() and cin.ignore and cin.clear */
    int iNum1 , iNum2 ;
    cout<<"Enter tow integers: " ;
    cin>>iNum1>>iNum2;
    if(cin.fail())
    {
       cout<<"You have another trail \n" ;
       cin.clear() ;
       cin.ignore(1000 , '\n') ;
       cin>>iNum1>>iNum2;
       if(cin.fail())
         cout<<"Bye Bye \n" ;
       else
         cout<<"Sum = "<<iNum1 + iNum2 ;
    }

     else
          cout<<"Sum = "<<iNum1 + iNum2 ;





    return 0;
}
