#include <iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter day number(1-7):";
    cin>>day;
    switch (day)
    {
        case 1:
        cout<<"Monday"<<endl;
        break;
        case 2:
        cout<<"Tuesday"<<endl;
        break;
        case 3:
        cout<<"Wedn"<<endl;
        break;
        case 4:
        cout<<"Thurs"<<endl;
        break;
        case 5:
        cout<<"Friday"<<endl;
        break;
        case 6:
        cout<<"Saturday"<<endl;
        break;
        case 7:
        cout<<"Sunday"<<endl;
        break;
        default:
        cout<<"Not a valid day"<<endl;
        break;
    }
    return 0;
}