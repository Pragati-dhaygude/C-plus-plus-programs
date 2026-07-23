#include<iostream>
using namespace std;

int main(){
    int a = 10, b= 5;
    cout<<"Before swapping: a = "<<a<<"b="<<b<<endl;
    a = a+b; // now a becomes 15
    b = a-b; //now b becomes 10
    a = a-b; //now a becomes 5
    cout<<"After swapping: a = "<<a<<"b="<<b<<endl;
    return 0;

}