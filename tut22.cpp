#include<iostream>
using namespace std;

struct A
{
    int ID;   
    string name;
    float salary;
    
};

int main(){
    struct A abc;
    abc.ID=67;
    abc.name="Vishnu";
    abc.salary=12000;
    cout<<abc.ID<<" "<<abc.name<<" "<<abc.salary;

    return 0;
}