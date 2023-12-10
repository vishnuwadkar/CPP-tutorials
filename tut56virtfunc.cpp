#include<iostream>
using namespace std;

class Base{
    public:
         void virtual func(){   //virtual function declared
            cout<<"Base class function executed!";
        }

};
class Derived:public Base{
    public:
        void func(){
            cout<<"Derived class function executed!";
        }
};
int main(){
    Base* baseptr;      //baseclass pointer
    Derived der;        //derived class object
    baseptr= &der;      //baseclass pointer pointing derived class object
    baseptr->func();    /* normal, here the baseclass function would have been executed,
    but since this is defined as a virtual fucntion in the base class, in this scenario 
    the derived class function would be executed*/

    return 0;
}
