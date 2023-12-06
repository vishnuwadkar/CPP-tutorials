#include<iostream>
using namespace std;

void swappointer(int*a, int*b){
    int temp = *a;
    *a = *b;
    *b= temp;
}


int main(){
    int x=4, y=5;
    cout<<"The previous values of x and y are: "<<x<<" "<<y<<endl;
    swappointer(&x,&y);
    cout<<"The swapped values of x and y are: "<<x<<" "<<y;

    return 0;
}