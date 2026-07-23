#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    
    int r, c, i, j, zero=0, nonzero=0;
    // Input number of rows and columns
    cout<<"Enter number of rows and column:";
    cin>>r>>c;
    // Input elements in matrix
    cout<<"Enter elements:";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
            if(a[i][j] == 0){
                zero++;
            }
            else{
                nonzero++;
            }
        }
    } 
    cout<<"zero elements:"<<zero;
    cout<<"nonzero element:"<<nonzero;
    if(zero>nonzero){
        //convert it into three triplet formate
        cout<<"Triplet formate:";
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(a[i][j] != 0){
                    cout<<i<<" "<<j<<" "<<a[i][j]<<endl;
                }
                
            }
        }
        
    }
    // transpose of three triplet matrix
    cout<<"Transpose matrix:"<<endl;
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
           if(a[j][i] != 0){
            cout<<i<<" "<<j<<" "<<a[j][i]<<endl;

           }
        
        }
    }
    
    return 0;

}