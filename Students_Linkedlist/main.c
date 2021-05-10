#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char name[50] ;
    unsigned int ID ;
    char email[50] ;

} Student ;

struct Node
{
    Student studentData ;
    struct Node *next ;
};

struct Node *start = NULL ;

void addStudent(Student *stPtr) ;
void displayData(void) ;

int main()
{
    Student me     = {"Kareem" , 1200 , "kareemm.zafan@gmail.com"} ;
    Student yassen = {"Yassen", 13300 , "yass10@gmail.com"}  ;

    addStudent(&yassen) ;
    addStudent(&me) ;
    displayData();


    return 0;
}

void addStudent(Student *stPtr)
{

    struct Node *New_Student = (struct Node*) malloc(sizeof(struct Node)) ;

    New_Student->next = start ;
    start = New_Student ;
    /*Assign the student Data */
    strcpy(New_Student->studentData.name , stPtr->name   ) ;
    strcpy(New_Student->studentData.email ,stPtr->email ) ;
    New_Student->studentData.ID = (stPtr->ID) ;


    return ;
}
void displayData(void)
{

    struct Node *currStudent = start ;
    if(currStudent == NULL) printf("\nEmpty List\n ") ;
    else
        while(currStudent != NULL)
        {

            printf("Student Name: %s \n",currStudent->studentData.name);
            printf("Student email: %s \n",currStudent->studentData.email);
            printf("Student ID: %d \n",currStudent->studentData.ID);
            printf("#####################\n") ;
            currStudent = currStudent->next ;
        }

    return ;
}
