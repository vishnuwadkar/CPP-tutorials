#include<iostream>
using namespace std;

int fibbonacci(int n){
    if ((n==1)||(n==0)){
        return n;
    }
    else{
        return (fibbonacci(n-1)+fibbonacci(n-2));

    }

}

int main(){
    int x, i=0;
    cout<<"Enter the number of terms of Fibbonacci series: ";
    cin>>x;
    cout<<"\nFibbonacci series->";
    while(i<x){
        cout<<" "<<fibbonacci(i);
        i++;
    }

    return 0;

    }
