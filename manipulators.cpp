//MANIPULATORS IN CPP: 'setw' and 'endl' manipulator

#include<iostream>
#include<iomanip>   //headerfile for setw manipulator
using namespace std;

int main(){
    int a = 45;  
    int b = 4;
    int c = 4509;

    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c;
    
    return 0;
}
