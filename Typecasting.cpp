#include<iostream>
using namespace std;

int main(){


    int b=45;
    float c=45.665;

    cout<<(float)b<<endl;
    cout<<(int)c<<endl;             //thus typecasting is used to convert a type of value into another type!
    cout<<int(c)<<endl;

    cout<<b+c<<endl;
    cout<<b+int(c);

    return 0;
}