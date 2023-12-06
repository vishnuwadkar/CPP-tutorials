#include<iostream>
using namespace std;


void g(){
    cout<<"Hello, Good Morning!"<<endl;
}

int sum(int a, int b){
    int c=a+b;
    cout<<"The sum is "<<c;
}

int prod(int a, int b){
    int c=a*b;
    cout<<"The product is "<<c;
}

void divison(int x, int y){
    double c=x/y;
    cout<<"The division is "<<c;

}
int main(){
    g();
    int num1;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    int num2;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    int func;
    cout<<"Choose the function: \n";
    cout<<"1.sum \n 2.prod \n 3.div"<<endl;
    cin>>func;

    if(func==1){
        sum(num1,num2);
    }
    else if(func==2){
        prod(num1, num2);
    }
    else if(func==3){
        divison(num1, num2);
    }

    

    return 0;
}

