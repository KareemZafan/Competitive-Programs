#include <iostream>

using namespace std;
struct Employee {

 string name ;
 double salary ;
 /* Struct Construtor */
 Employee(string empName , double empSalary)
 {
     name = empName ;
     salary = empSalary ;
 }
 /* Destructor    */
 ~Employee()
 {
     cout<<"Destroying the Obejects\n" ;
 }
 void setSalary(double value)
 {
     salary  =  value ;
 }
   void addSalary(double value) ;   /* Here we declare a function
                                       and its definition will be out
                                    */
};
int main()
{
    Employee emp1("Kareem" , 1300) ;
    cout<<emp1.name<<endl;
    cout<<emp1.salary<<endl;

    emp1.setSalary(15000) ;
    cout<<emp1.salary<<endl;
    emp1.addSalary(2000) ;
    cout<<emp1.salary<<endl;




    return 0;
}
  void Employee::addSalary(double value)
  {

      salary += value ;
  }
