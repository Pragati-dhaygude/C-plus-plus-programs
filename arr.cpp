#include <iostream>
using namespace std;

int main()
{    
    // if we want to insert element
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos = 3;
    int value = 35;
     //shift elements to the right
    for(int i=size; i>pos; i--)
    {
        arr[i] = arr[i-1];
        

    }
    //insert the new element
    arr[pos] = value;
    for(int i=0; i<size+1; i++){
        cout<<arr[i]<<" ";
    }

    // If we want to replase the element
     
    arr[pos] = value;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
     
    // if we want to remove any random element from the array

    for(int i=0; i<size;i++)
    {
        if(i==3){
            continue;
        }
        cout<<arr[i]<<" ";
    }
    return 0;
}