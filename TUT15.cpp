#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}

int main(){
    int num1; int num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter another number: "<<endl;
    cin>>num2;
    cout<<"The sum of two numbers is: "<<sum(num1, num2);
    return 0;
}