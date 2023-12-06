#include<iostream>
using namespace std;

class employee
{
    int id;
    int salary;

    public:
    void setid(void){
        salary=122;
        cout<<"Enter the id of Employee: "<<endl;
        cin>>id;

    }

    void getid(void){
        cout<<"The ID of this employee is: "<<id<<" and his salary is: "<<salary<<endl;

    }
};
int main(){
    //employee xyz;
    //xyz.setid();
    //xyz.getid();

    employee x[4];                 //a new datatype named employee
    for(int i=0; i<4; i++ ){
        x[i].setid();
        x[i].getid();
    }      
    return 0;

}