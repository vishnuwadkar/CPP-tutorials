#include<iostream>
using namespace std;

class simp{
    int a;
    public:
    void setdata(int a){
        this->a =a;         //syntax of this ptr
    }                       //this->a points the class variable since it is prioritized
    void getdata(){
        cout<<"The value of a is "<<a;
    }

};

int main(){
    simp an;
    an.setdata(2);
    an.getdata();
    return 0;

}