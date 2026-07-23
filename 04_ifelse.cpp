#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter letter(A-Z,a-z):";
    cin>>c;
    if(c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U'||c == 'a'||c == 'e'||
    c == 'i'||c == 'o'||c == 'u'){
        cout<<c<<"is vowel";
    }
    else{
        cout<<c<<"is consonant";
    }
    return 0;
}