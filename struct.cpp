#include  <iostream>
using namespace std;

struct student{
    char name[30];
    int rollno;
    int PRN;
    float marks;
};
//make object
student s[100];
int n = 0;

//Add student
void add_student(){
    cout<<"\n Enter name:\n";
    cin>>s[n].name;

    cout<<"Enter roll number:\n";
    cin>>s[n].rollno;

    cout<<"Enter PRN:\n";
    cin>>s[n].PRN;

    cout<<"Enter marks:\n";
    cin>>s[n].marks;
    cout<<"\nStudent added successfully\n";
    n++;
}
//display students

void display(){
    if(n==0){
        cout<<"\nNo student record found\n";
        return;
    }
    cout<<"Record not found\n";
    for(int i=0; i<n; i++){
        cout<<"Name :"<<s[i].name<<endl;
        cout<<"Roll no.:"<<s[i].rollno<<endl;
        cout<<"PRN :"<<s[i].PRN<<endl;
        cout<<"Marks :"<<s[i].marks<<endl;

    }

}
//search student
void search(){
    int r;
    cout<<"Enter roll number to search:";
    cin>>r;
    for(int i=0; i<n; i++){
        if(s[i].rollno == r){
            cout<<"\n Student found \n";
            cout<<"Name:"<<s[i].name<<endl;
            cout<<"Roll no.:"<<s[i].rollno<<endl;
            cout<<"PRN:"<<s[i].PRN<<endl;
            cout<<"Marks:"<<s[i].marks<<endl;
            return;
        }
    }
}

int main()
{
    int choise;
    do{
        cout<<"\n =====Student Management System=====\n";
        cout<<"1.Add student\n";
        cout<<"2.Display Student\n";
        cout<<"3.Search Student\n";
        cout<<"4.Exit\n";
        cout<<"Enter choise:";
        cin>>choise;

        switch (choise){
            case 1:
                add_student();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;

            default:
                cout<<"Invalid choise:\n";    
        }

    }while(choise != 4);
    return 0;
}