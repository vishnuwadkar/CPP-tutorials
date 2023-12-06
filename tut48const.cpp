#include <iostream>
using namespace std;

class base1{
    int a;
    public:
        base1(int x){                       //base1 constructor that takes one arg
            a=x;
            cout<<"base1 constructor called!"<<endl;   
        }
        void printdata1(){
            cout<<"The value of Base 1 is "<<a<<endl;
        }
};
class base2{
    int b;
    public:
        base2(int y){            //base2 constructor that takes two arg
            b=y;
            cout<<"base2 constructor called!"<<endl;
        }
        void printdata2(){
            cout<<"The value of Base 2 is "<<b<<endl;
        }
};
class derived:public base2, public base1{        //inheritance syntax where base 2 is declared first so its const will run first
    int c;
    public:
        derived(int a1, int a2, int a3):base1(a1),base2(a2){     //const in derived class syntax
            c=a3;                                  //here derived class const takes three arg and passes one to base1 and one to base2
            cout<<"derived class constructor called!"<<endl;
        }
        void printdata3(){
            cout<<"The value of derived is "<<c<<endl;
        }
        
};

int main(){
    derived xyz(2,3,4);    //object of derived class created; 2 goes to base1 const, 3 goes to base2 const and 4 goes to derived const
    xyz.printdata1();
    xyz.printdata2();
    xyz.printdata3();

    return 0;

}
