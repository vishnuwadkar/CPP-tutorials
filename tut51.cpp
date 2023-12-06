#include<iostream>
using namespace std;

class complex{
    int real, imag;
    public: 
        void setdata(int a, int b){
            real=a;
            imag=b;
        }
        void getdata(){
            cout<<"The number is "<<real<<"+"<<imag<<"i"<<endl;
        }
};

int main(){
    //complex* ptr= new complex  >>amotehr method of creating an object using new keyword
    complex a;
    complex* ptr= &a;      //pointer to an object
    //(*ptr).setdata(4,5);    //dereferencing the pointer
    //the arrow operator
    ptr->setdata(6,7);     //thus arrow is used to dereference and run the function
    (*ptr).getdata();      //can also be written as ptr->getdata()

    //array of objects
    complex* ptr1=new complex[4];
    ptr1->setdata(8,9);
    ptr1->getdata();
    (ptr1+1)->setdata(5,6);
    (ptr1+1)->getdata();


    return 0;
}