#include <iostream>
using namespace std;

int c=3;

int main(){
    //int a, b ,c;
    //cout<<"Enter a number: ";
    //cin>>a;
    //cout<<"Enter another number: ";
    //cin>>b;

   // c=a+b;
    cout<<"The sum is "<<::c<<endl;        //Here we used a global scope operator, hence it will print global value of c i.e 3

    float d=34.3331f;
    long double e = 34.333l;
    cout<<sizeof(34.3331l)<<endl;
    cout<<sizeof(34.3331f)<<endl;

    float x= 45;
    float  & y=x;                          //Here y is a reference variable that points y

    cout<<x<<endl;
    cout<<y;

    return 0;


}