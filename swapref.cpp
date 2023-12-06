#include<iostream>
using namespace std;

void swapref(int&a, int&b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x, y;

    cout<<"Enter the values to be swapped: ";
    cin>>x>>y;4


    cout<<"The prevois values are: "<<x<<" "<<y<<endl;

    swapref(x,y);
    cout<<"The swapped value are: "<<x<<" "<<y<<endl;

    return 0;
}