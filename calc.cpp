#include<iostream>
using namespace std;
int a, b;                //global varibales a and b

class calc               //classs declaration
{
    public:
    int sum(){           //function declaration or data fucntions   
        
        int c=a+b;       //function deifintion
        return c;
    }
    int mul(){
         int c=a*b;
         return c;    
    }
};

int main(){                      //main fucntion

    calc x;                      //object creation

    cout<<"Enter number one: "<<endl;      //taking inputs
    cin>>a;
    cout<<"Enter number two: "<<endl;
    cin>>b;
    int p=x.sum();               //function called
    cout<<"Sum is: "<<p<<endl;

    int q=x.mul();
    cout<<"Product is: "<<q;

    return 0;




}