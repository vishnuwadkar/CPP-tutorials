#include<iostream>
using namespace std;

inline int sum(int x, int y){
    int c= x+y;
    return c;


}
int main(){
    int a, b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"The sum of two numbers is : "<< sum(a,b);
    return 0;
}



