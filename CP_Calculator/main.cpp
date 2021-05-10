

#include <iostream>
using namespace std;
int main(void)
{
    double num1 = 0 , num2 = 0  ;
    int choice = 0  ;
    do
    {
        cout<<"############### Main Menu ############### \n" ;
        cout<<"1-Add\n" ;
        cout<<"2-Sub\n" ;
        cout<<"3-Mul\n" ;
        cout<<"4-Div\n" ;
        cout<<"5-Exit\n" ;
        cout<<"Enter two numbers: " ;
        cin>>num1>>num2 ;

        /* Validate Inputs */
        if(cin.fail())
        {
            {
                do{
                cout<<"Enter two correct values: ";
                cin.clear() ;
                cin.ignore(1000,'\n');
                cin>>num1>>num2 ;
                }while(cin.fail()) ;
            }
        }

        cout<<"Enter your choice: " ;
        cin>>choice ;
        if(cin.fail() || choice > 5 || choice < 1) {
           do{
           cout<<"Wrron choice\n" ;
           cin.clear() ;
           cin.ignore(1000,'\n')  ;
           cin>>choice ;
           }while(!(cin.fail() || choice > 5 || choice < 1)) ;

        }

        switch(choice){
            case 1:cout<<num1 + num2<<endl;
                break ;
            case 2:cout<<num1 - num2<<endl;
                break ;
            case 3:cout<<num1 * num2<<endl;
                break ;
         case 4:if(num2 != 0.0)
                cout<<num1 / num2<<endl;
                else {
                    cout<<"Can not divide by zero\n" ;
                }
                break ;
         case 5:terminate() ;
         break ;
        }
    }while(choice != 5 ) ;



    return 0 ;

}
