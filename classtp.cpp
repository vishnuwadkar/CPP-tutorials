#include<iostream>
using namespace std;

class students
    {
        public:
        int marks;
        string name;
        int rollno;

        public:
        void dispatt(){
        cout<<"STUDENT RESULT"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Your Percentage are: "<<marks*100/500<<"%"<<endl;
        
        }
    };

int main(){
    students V;
    cout<<"Enter your name: ";
    cin>>V.name;
    cout<<"Enter your roll no: ";
    cin>>V.rollno;
    cout<<"Enter your marks: ";
    cin>>V.marks;

    V.dispatt();
    return 0;
}