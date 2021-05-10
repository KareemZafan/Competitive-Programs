#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<string, int > gradeByName ;

    gradeByName.insert({"Ahmed", 13});
    gradeByName.insert({"Bakr", 14});
    gradeByName.insert({"Hamdy", 15});
    gradeByName.insert({"Taha", 20});
    gradeByName.insert({"yousef", 87});
   auto st = gradeByName.find("Taha") ; cout<<st->second<<endl;


    return 0;
}
