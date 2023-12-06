#include<iostream>
using namespace std;

template<class T=int, class U=float>
class myclass{
    T a;
    U b;
    public:
        myclass(T x, U y){
            a=x;
            b=y;
        }
        void display(){
            cout<<"value of a: "<<a<<endl;
            cout<<"value of b: "<<b<<endl;
        }
        void func(U t){         //function which will be executed for U data type
            cout<<"This is the first function!"<<t<<endl;
        }
        void func(int A);    //overloaded function which will be executed for int data type only
};
template<class T, class U>
void myclass<T, U> :: func(int a){      //defining the functon outside the class with templates
    cout<<"This is the second function!"<<a<<endl;
}

int main(){
    myclass<int, double> obj(45,6.67);
    obj.display();
    obj.func(8.66);

    return 0;
}