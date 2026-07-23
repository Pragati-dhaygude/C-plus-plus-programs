#include <iostream>
using namespace std;
int main(){
    int n=4,m=6,i,j;
    // cout<<"Enter n=";
    // cin>>n;
    // cout<<"Enter m=";
    // cin>>m;
    // square, rectangle
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
    // triangle 1
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";

    // triangle 2
    for(i=0;i<=n;i++){
        for(j=0;j<(n-i+1);j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
    return 0;

}
