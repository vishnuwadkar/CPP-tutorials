#include<iostream>
using namespace std;

class test{
    int a, b;
    public:
        test(int i, int j):a(i),b(j)       //syntax for initializtion list
        //test(int i, int j):a(i),b(a+j)    we can also initialize one varible with other and can perform operations
        //test(int i, int j):b(j),a(b+i)      but initialization depends on order of variable decaration and thus this will throw garbage value
        {
            cout<<"The value of a is "<<a;
            cout<<"\nThe value of b is "<<b;
            cout<<"\nConstructor executed!";
        }
};

int main(){
    test x(5,7);
    return 0;
}