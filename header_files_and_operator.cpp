//this is a system header file which comes with the compiler
#include<iostream>
#include<math.h> //this is another system defined header file that has all mathematical functions
//this is a user defined header file
//#include "this.h"  >> This file should be present in the current directory
using namespace std;

int main(){
    cout<<"Hello World"<<"\n";

    int a=5;
    int b=pow(2,a);
   
    cout<<a<<"\n"<<b<<endl;

    cout<<"Operators in CPP: "<<endl;   //endl takes to new line

    //Arithmetic Operators
    // +, -, *, /

//Assignment operators in cpp
// == equal to
// != not equal to
// <= less than or equals to
// >= greater then or equals to
// ++ increment operator (increment by one)
// -- decrement operator
cout<<(a==b)<<endl;
cout<<(a>=b)<<endl;
cout<<a++<<endl;
cout<<++a<<endl;

//LOGICAL OPERATORS
// && AND operator
// || OR operator
// !(a==b) NOT operator

cout<<((a>b) && (a==b))<<endl;
cout<<((a>b) || (a==b))<<endl;
cout<<(!(a<b));



return 0;
}

