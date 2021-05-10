#include <iostream>

using namespace std;
void sameSequence(char[]) ;

int main()
{
    sameSequence("yYyasseEEEn") ;
    return 0;
}

void sameSequence(char str[])
{
    unsigned int index = 0 ;
    cout<<str[0] ;
    for(index = 1; str[index] != NULL; ++index )
    {
        if((str[index] == str[index - 1])||str[index] ==  toupper(str[index - 1]) || str[index] == tolower(str[index - 1]))
            cout<<str[index] ;
        else
        {
            cout<<"\n"<<str[index] ;

        }


    }


    return ;
}
