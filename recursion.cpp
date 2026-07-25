//write a program to find factorian of a number
#include<iostream>
using namespace std;

//function prototype
int fact(int n){
    //function defination
    if(n==1){
        return 1;
    }
    else if(n==0){                
        return 1;

    }
    else{
        return n* fact(n-1);
    }
}
int main()
{
    //function call
    int n;
    cout<<"Enter n:";
    cin>>n;
     
    cout<<"factorial of "<<n<<"="<<fact(n);
    return 0;
}

// write a program to find power 
#include <iostream>
using namespace std;

int pow(int x,int y){
    if(y == 0){
        return 1;
    }
    else{
        return x*pow(x, y-1);
    }
}
int main(){
    int x=2, y=5;
    cout<<"power ="<<pow(x,y);
    return 0;
}

// Reverse string using recursion

