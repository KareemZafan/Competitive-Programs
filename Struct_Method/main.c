#include <stdio.h>
#include <stdlib.h>
 double updateSalary(double value){
      return value ;
  }
struct funMethod{
  double salary ;
  double (*funcPtr)(double) ;

};
int main()
{


    struct funMethod a = {1000 , &updateSalary};
    a.salary = a.funcPtr(10444) ;
    printf("%.4f",a.salary) ;

    return 0;
}
