#include <stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data ;
    struct node *next ;
} Node;

Node* start = NULL ;

void Linked_List_Node_At_First(int value) ;
void Linked_List_Node_At_End(int value) ;
int  Linked_List_Size(void) ;
void Linked_List_Node_At_Pos(int Node_pos , int value) ;
int  Linked_List_Get_First_Node_Val(void) ;
int  Linked_List_Get_Last_Node_Val(void) ;
void Linked_List_Traversing(void) ;
int  Linked_List_Get_Node_Val_At_Pos(int Node_pos) ;
int  Linked_List_Get_Node_Val_At_Back_Pos(int Node_pos) ;
void Linked_List_Delete_First_Node(void) ;
void Linked_List_Delete_Last_Node(void) ;
void Linked_List_Delete_Node_At_Pos(int Node_pos) ;
int Linked_List_Search(int Search_Val) ;
void Linked_List_Delete_Node_At_Pos_Back(int Node_pos) ;
void Linked_List_Reverse_List(void) ;
void Linked_List_Remove_List_Sequence(int Start_Node , int End_Node) ;
void PusH_Stack(int value) ;
int Pop_Stack() ;
void Push_Queue(int value) ;
int PoP_queue(void) ;

/* Main Function */
int main(void)
{
    /* Variable Definintions */
    int choice  = 0 ;
    int New_Node_Val = 0 ;
    int New_Node_Pos = 0 ;
    int Node_pos     = 0 ;
    int S_Node ;
    int E_Node   ;
    int i = 0 ; /*Local Loop Counter */
    for(i = 10 ; i <=100 ; i += 10) Linked_List_Node_At_End(i) ;
    while(1)
    {
        do
        {
            /* Printing Start Menu */
            printf("\n\n############# Menu #############\n") ;
            printf("1-Add Node At First\n") ;
            printf("2-Add Node At End\n") ;
            printf("3-Add Node At Position\n") ;
            printf("4-Get First Node Value\n") ;
            printf("5-Get Last Node Value\n") ;
            printf("6-Get List Size\n") ;
            printf("7-Print List \n") ;
            printf("8-Get Node At Position \n") ;
            printf("9-Get Node At Position from Back \n") ;
            printf("10-Delete First Node\n") ;
            printf("11-Delete Last Node\n") ;
            printf("12-Delete Node At Position \n") ;
            printf("13-Search for a Value \n") ;
            printf("14-Delete Node At Position from Back\n") ;
            printf("15-Reverse a List\n") ;
            printf("16-Remove Sequence \n") ;
            printf("17-PushStack\n") ;
            printf("18-PopStack\n") ;
            printf("19-PushQueue\n") ;
            printf("20-PopQueue\n") ;
            printf("21-Exit\n") ;
            printf("Enter Your Choice: ") ;
            scanf("%d",&choice) ;

            /* Taking the required action */

            switch(choice)
            {
            case 1:
                printf("Enter the new node value: ");
                scanf("%d",&New_Node_Val) ;
                Linked_List_Node_At_First(New_Node_Val) ;
                break ;
            case 2:
                printf("Enter the new node value: ") ;
                scanf("%d",&New_Node_Val) ;
                Linked_List_Node_At_End(New_Node_Val) ;
                break ;
            case 3:
                printf("Enter the node position: ") ;
                scanf("%d",&New_Node_Pos) ;
                printf("Enter the new node value: ") ;
                scanf("%d",&New_Node_Val) ;
                Linked_List_Node_At_Pos(New_Node_Pos,New_Node_Val) ;
                break ;
            case 4:
                printf("First Node = %d\n",Linked_List_Get_First_Node_Val()) ;
                break ;

            case 5:
                printf("Last Node = %d\n",Linked_List_Get_Last_Node_Val()) ;
                break ;

            case 6:
                printf("List Size = %d\n",Linked_List_Size()) ;
                break ;

            case 7:
                printf("\n\nCurrent List: \n") ;
                Linked_List_Traversing() ;
                break ;
            case 8:
                printf("Enter The Node Position: ") ;
                scanf("%d", &Node_pos) ;
                printf("Node #%d = %d\n" , Node_pos ,Linked_List_Get_Node_Val_At_Pos(Node_pos)) ;
                break ;

            case 9:
                printf("Enter The Node Position: ") ;
                scanf("%d", &Node_pos) ;
                printf("Node #%d from Back = %d\n" , Node_pos ,Linked_List_Get_Node_Val_At_Back_Pos(Node_pos)) ;
                break ;


            case 10:
                Linked_List_Delete_First_Node() ;
                break ;

            case 11:
                Linked_List_Delete_Last_Node() ;
                break ;

            case 12:
                printf("Enter The Node Position: ") ;
                scanf("%d", &Node_pos) ;
                Linked_List_Delete_Node_At_Pos(Node_pos) ;
                break ;
            case 13:
                printf("Enter a value to search: ") ;
                scanf("%d", &Node_pos) ;
                (Linked_List_Search(Node_pos) != 0) ?  printf("%d exits on position #%d",Node_pos , Linked_List_Search(Node_pos))
                : printf("%d Does not exist on the List\n",Node_pos) ;
                break ;
            case 14:
                printf("Enter The Node Position: ") ;
                scanf("%d", &Node_pos) ;
                Linked_List_Delete_Node_At_Pos_Back(Node_pos) ;
                break ;


            case 15:
                Linked_List_Reverse_List() ;
                break ;


            case 16:
                printf("Enter the start of the sequence: ") ;
                scanf("%d",&S_Node) ;
                printf("Enter the End of the sequence: ") ;
                scanf("%d",&E_Node) ;
                Linked_List_Remove_List_Sequence(S_Node , E_Node) ;
                break ;

                case 17:
                          printf("Enter Push Value\n") ;
                          scanf("%d",&E_Node) ;
                          PusH_Stack(E_Node) ;

                break ;

                case 18:

                          Pop_Stack() ;

                break ;

                case 19:
                          printf("Enter Push Value to Queue\n") ;
                          scanf("%d",&E_Node) ;
                          Push_Queue(E_Node) ;

                break ;

                case 20:

                          PoP_queue() ;

                break ;

            case 21:
                exit(1) ;
                break ;



            default :
                printf("\n Invalid Choice !!! Try Again...\n") ;
                break ;
            }



        }
        while(choice !=  21) ;
    }

    return  0;
}



void Linked_List_Node_At_First(int value)
{
    Node *New_Node = (Node*) malloc(sizeof(Node)) ;
    New_Node -> data = value ;
    New_Node -> next = (Node*) start ;

    start = (Node*) New_Node ;
    return ;
}


void Linked_List_Traversing()
{

    if(start == NULL)
    {
        printf("Empty List !!!\n");
        return;
    }
    else
    {
        Node *List_counter = (Node*) start  ;
        while (List_counter != NULL)
        {
            (List_counter->next != NULL ) ? printf(" %d -->",List_counter->data) : printf(" %d ",List_counter->data);
            List_counter = ( Node*) List_counter->next ;
        }
    }
    return ;
}

void Linked_List_Node_At_End(int value)
{
    Node *New_Node = (Node*) malloc(sizeof(Node)) ;
    New_Node->next = NULL ;
    New_Node->data = value ;

    if(start == NULL)
    {
        start = (Node*) New_Node ;
        return  ;
    }
    else
    {

        Node *list_Counter = (Node*) start ;
        while(list_Counter->next != NULL)
            list_Counter = (Node*) list_Counter->next ;

        list_Counter->next = (Node*) New_Node ;
    }
    return ;
}


int Linked_List_Size(void)
{
    int L_Size = 0 ;
    if(start == NULL)
    {
        return 0 ;
    }

    else
    {
        Node* List_Ptr = (Node*) start ;
        while(List_Ptr != NULL)
        {
            L_Size++ ;
            List_Ptr = (Node*) List_Ptr->next ;
        }

    }

    return L_Size ;
}


void Linked_List_Node_At_Pos(int Node_pos , int value)
{
    if(start == NULL && Node_pos == 1)
    {
        Node *New_Node = (Node*) malloc(sizeof(Node)) ;
        New_Node->next = NULL ;
        New_Node->data = value ;
        /* Adding the node */
        start = New_Node ;
        return ;
    }
    else if((Node_pos > Linked_List_Size()) || (Node_pos < 1))
    {
        printf("Invalid Position!!!\n") ;
        return ;
    }
    else if(Node_pos == 1)
    {
        Linked_List_Node_At_First(value) ;
    }
    else
    {

        Node *New_Node = (Node*) malloc(sizeof(Node)) ;
        New_Node->data = value ;
        Node *list_Counter = (Node*) start ;

        int i = 0; /* Staring with the first Node */
        /* To accommodate the first Node */
        for(i = 1 ; i < Node_pos-1 ; ++i )
        {
            list_Counter = list_Counter->next ;
        }

        /* Here reaching the position we need */

        New_Node->next     = (Node*) list_Counter->next ;
        list_Counter->next = (Node*) New_Node ;
    }
    return ;
}



int  Linked_List_Get_First_Node_Val(void)
{
    if(start == NULL)
    {
        printf("Empty List !!! \n") ;
        return (0)  ;
    }
    else
    {
        return (start->data) ;
    }
}


int  Linked_List_Get_Last_Node_Val(void)
{
    if(start == NULL)
    {
        printf("Empty List !!! \n") ;
        return (0)  ;
    }
    else
    {
        Node *list_Counter = (Node*) start ;
        while(list_Counter->next != NULL )
        {
            list_Counter = list_Counter->next ;
        }
        /*Reaching the last Node */
        return (list_Counter->data) ;
    }

}



int  Linked_List_Get_Node_Val_At_Pos(int Node_pos)
{
    int Node_Value ;
    if(start == NULL )
    {
        printf("Empty List !!\n") ;
        return (0) ;
    }

    else if(Node_pos > Linked_List_Size() || Node_pos < 1)
    {
        printf("Invalid Position !!!\n") ;
        return (0) ;
    }
    else
    {
        int i = 1 ;   /* Local loop counter */
        Node *list_Counter = (Node*) start ;

        for(i= 1 ; i < Node_pos ; ++i)
        {
            list_Counter = list_Counter->next	 ;
        }
        Node_Value = list_Counter->data ;
    }


    return Node_Value ;
}


int  Linked_List_Get_Node_Val_At_Back_Pos(int Node_pos)
{
    /* Getting the Node value in forward way using List_Size function */
    return Linked_List_Get_Node_Val_At_Pos(Linked_List_Size() - Node_pos + 1) ;
}


void Linked_List_Delete_First_Node(void)
{
    if(start == NULL)
    {
        printf("Empty List!!!\n") ;
        return ;
    }

    else
    {
        Node *list_Counter = start ;

        start = start->next ;
        /* Deallocate this Node */
        free(list_Counter) ;
    }

    return ;
}

void Linked_List_Delete_Last_Node(void)
{
    if(start == NULL)
    {
        printf("Empty List!!!\n") ;
        return ;

    }

    else if(NULL == start->next)
    {
        start = NULL ;
        return ;
    }

    else
    {
        Node *list_Counter1 = NULL ;
        Node *list_Counter2 = start ;

        while(list_Counter2->next != NULL)
        {
            list_Counter1 = list_Counter2 ;
            list_Counter2 = list_Counter2->next ;
        }

        /* Make the Node which perceed the last one to be the last itself */
        list_Counter1->next = NULL ;
        free(list_Counter2) ;

    }


    return ;
}

void Linked_List_Delete_Node_At_Pos(int Node_pos)
{
    if(start == NULL)
    {
        printf("Empty List !!! \n") ;
        return ;

    }

    else if(1 == Node_pos)
    {
        Linked_List_Delete_First_Node() ;
        return ;
    }

    else
    {
        Node *list_Counter1 = NULL ;
        Node *list_Counter2 = start ;
        int i = 1 ; /* Local Loop Counter */

        for(i= 1 ; i < Node_pos ; ++i)
        {
            list_Counter1 = list_Counter2 ;
            list_Counter2 = list_Counter2->next ;
        }

        list_Counter1->next = list_Counter2->next ;
        free(list_Counter2) ;
    }

    return ;
}

int Linked_List_Search(int Search_Val)
{
    int Key_pos = 0 ;
    if( NULL == start)
    {
        printf("Empty List\n") ;
        return Key_pos ;
    }

    else
    {
        Node *list_Counter = start ;
        int i = 1 ; /* Local Loop Counter */
        for(i = 1 ; i <= Linked_List_Size() ; ++i)
        {
            if(Search_Val == list_Counter->data)
            {
                Key_pos = i ;
                /*if you break from this point you
                will return the first position if the value repeated */
            }
            list_Counter = list_Counter->next ;
        }
    }
    return Key_pos ;
}

void Linked_List_Delete_Node_At_Pos_Back(int Node_pos)
{
    return (Linked_List_Delete_Node_At_Pos(Linked_List_Size()- Node_pos+1)) ;
}

void Linked_List_Reverse_List(void)
{
    Node *Prev_ptr    = NULL  ;
    Node *Current_ptr = start ;
    Node *Next_ptr    = NULL  ;
    if(Current_ptr == NULL )
    {

        printf("ERROR Empty Linked List \n") ;

    }
    while(Current_ptr != NULL)
    {
        Next_ptr = Current_ptr -> next  ;
        Current_ptr->next = Prev_ptr ;
        Prev_ptr = Current_ptr ;
        Current_ptr = Next_ptr ;
    }
    start = Prev_ptr ;    /* List Reversed */

    return ;
}


void Linked_List_Remove_List_Sequence(int Start_Node , int End_Node)
{
    if(start == NULL)
    {
        printf("EEROR!!! Empty List\n") ;
    }
    else if(Start_Node > End_Node )
    {
        printf("Invalid Sequence\n") ;
        return ;
    }

    else
    {
        int Current_Node = Start_Node ;
        while( Start_Node <=  End_Node)
        {
            Linked_List_Delete_Node_At_Pos(Current_Node++) ;
        }
    }

    return ;
}

void PusH_Stack(int value)
{
    Linked_List_Node_At_First(value);

    return ;
}

int Pop_Stack()
{
    printf("Poped Value = %d",Linked_List_Get_First_Node_Val())  ;
    Linked_List_Delete_First_Node() ;
    return 0  ;

}


void Push_Queue(int value)
{
   Linked_List_Node_At_End(value) ;
}
int PoP_queue(void) {
  printf("Poped Value = %d",Linked_List_Get_First_Node_Val())  ;
    Linked_List_Delete_First_Node() ;
    return 0  ;

}




