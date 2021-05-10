#include <iostream>
#include<stdlib.h>
using namespace std;

void _Insert_Std(string name , unsigned int id) ;
struct Student {
 string name  ;
 unsigned int ID ;
};
struct Node
{
    struct Student *Std  ;
    Node *next  ;
} *head;

int main(void)
{

    _Insert_Std("Ayman" , 1) ;
    _Insert_Std("Ahmed " , 2) ;
    _Insert_Std("Yassen" , 6) ;
    _Insert_Std("Adham",4) ;
    _Insert_Std("Kareem" , 7) ;



     return 0;
}

void _Insert_Std(string name , unsigned int id)
{
    Node *New_Node = new Node ;
    New_Node->next = NULL ;
    New_Node->Std->name = name ;
    New_Node->Std->ID = id ;

    if(head == NULL )
        head = New_Node ;
    else
    {
        Node *curr = head ;
        while(curr->next != NULL )
             curr = curr->next ;
        curr->next = New_Node ;
    }

    cout<<New_Node->Std->name<<" has been joined \n" ;

    return ;
}
