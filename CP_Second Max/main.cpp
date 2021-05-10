#include <iostream>
#include<assert.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;
#define SIZE 10
void Get_Fir_Sec_Max(int arr[] , int *firMax , int *secMax , int Size);
void Get_Fir_Sec_Max (int arr[])  ; /*using overloading technique */

int main()
{
    cout << "Get Max second Max of and array!" << endl;
    cout<<"Enter your array \n" ;
    int arr[SIZE]  , firMax = 0 , SecMax = 0  ;
    for(int i =0 ; i<SIZE ; ++i)
    {
        cout<<"Enter"<<" Element No "<<i+1<<endl ;
        cin>>arr[i] ;
    }

    cout<<"Your array is \n" ;
    for(int i =0 ; i<SIZE ; ++i)
    {
        cout<<arr[i]<<"\n" ;
    }

    Get_Fir_Sec_Max(arr , &firMax , &SecMax , SIZE) ;
    cout<<"First Max value = "<<firMax<<"\tSecond Max value =  "<<SecMax<<endl;
    /* Using another way for solve */
    Get_Fir_Sec_Max(arr) ;
    return 0;
}
void Get_Fir_Sec_Max(int arr[] , int *firMax , int *secMax , int Size)
{
    assert(sizeof(arr)>2) ; /* insures that the array has at least two elemetents */
    int firMax_element = arr[0] ;
    int secMax_element = arr[1] ;
    if(firMax_element<secMax_element) swap(firMax_element , secMax_element) ;
    for(int i = 2 ; i<SIZE ; ++i)
    {
        if(arr[i] > firMax_element)
        {
            secMax_element = firMax_element ;
            firMax_element = arr[i] ;
        }

        else if(arr[i] > secMax_element)
            secMax_element = arr[i] ;
    }

    *firMax = firMax_element ;
    *secMax = secMax_element ;
}
/*------------------------------------------------------------------------------------------*/
/* Using sorting */
void Get_Fir_Sec_Max (int arr[]) /*using overloading technique */
{
     assert(sizeof(arr)>2) ;
     for(int i = 0 ; i<SIZE ; i++)
     {
         arr[i] = 1 + rand() % 100 ;    /* allocate the array with random elements with values from 1 to 100 */
     }
     for(int i = 0 ; i<SIZE ; i++)
     {
        cout<<arr[i]<<'\n' ;    /* allocate the array with random elements with values from 1 to 100 */
     }

     sort(arr , arr+SIZE) ; /*sort all the array if you pass arr , arr + 2 it
     will sort the first two elements */

      cout<<"First Max value = "<<arr[SIZE - 1]<<"\tSecond Max value =  "<<arr[SIZE - 2]<<endl;




}
