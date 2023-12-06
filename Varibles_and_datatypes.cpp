#include<iostream>
using namespace std;

int sum=4; //this is global variable



int main(){
    //to learn various datatypes
    int a=4, b=5, sum=5; //this is a local variable
    float pi=3.14;
    bool is_true= false;
    //cout<<"The value of a is "<<a<<". The value of b is "<<b<<"\n";
    //cout<<"The multipliction of the above numbers with pi is:\n "<<a*pi<<"\n "<< b*pi;
    sum=a+b;
    cout<<sum<<is_true; //for boolean values, True is given by 1 and false is given by 0 
    return 0;
}