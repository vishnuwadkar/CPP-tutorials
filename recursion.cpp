#include<iostream>
using namespace std;

int fact(int n){
    if (n<=1){
        return 1;
    }
    return n*fact(n-1);
    
}

int main(){
    int a;
    cout<<"Enter the number to find factorial>>"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<fact(a);
    return 0;

}

