
//CPP program to find a table of a number using do while loop!

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int i=0;
    do{
        int res=n*i;
        cout<<res<<endl;
        i++;
    }while(i<=10);
    return 0;
}