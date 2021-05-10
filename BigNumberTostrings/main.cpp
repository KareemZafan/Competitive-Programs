#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;
string add9999(string num1 , string num2 ) ;
int main()
{
   string result = add9999("45","9999");
   cout<<result<<endl;

    return 0;
}


string add9999(string num1 , string num2)
{

    unsigned int n1 = num1.length() ;
    unsigned int n2 = num2.length() ;
    unsigned int maxSize = (n2 > n1) ? n2 : n1 ;
    unsigned int  carry = 0 ;
    string result = "" ;

    reverse(num1.begin() , num1.end()) ;
    reverse(num2.begin() , num2.end()) ;



    for(unsigned int i=0 ; i<maxSize+1; i++)
    {
        result.push_back(((num1[i] + num2[i] + carry - '0' - '0')%10) + '0') ;
        if((num1[i] + num2[i] + carry - '0' - '0') >= 10)
            carry = 1 ;
        else carry = 0 ;

    }

reverse(result.begin() , result.end()) ;
 return  result;

}
