#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Tell me your age"<<endl;
    cin>>a;

    if(a<18){
        cout<<"You are too young!";
    }
    else if(a>60){
        cout<<"You are too old!";
    }
    else{
        cout<<"You are perfect!";
    }
    return 0;
}