#include <iostream>
using namespace std;

class base
{   protected:      //protected access modifier
        int data1; // this is a protected variable 

public:        // public functions that can be accessed in derived class
    int data2;
    void setdata()   //takes values of data 1 and data 2 from user
    {   
        cout<<"Enter number one:";
        cin>>data1;
        cout<<"Enter number two:";
        cin>>data2;
    }
    int getdata1()      //returns value of data 1 since it is pvt member
    {
        return data1;
    }
    int getdata2()      //returns value of data 2
    {
        return data2;
    }
};
class derived : public base  //derived class names "derived"
{
    int data3;               //pvt variable

public:
    void process();           //forward declaration of variables
    void display();
};

void derived :: process()       
{
    data3 = data2 * data1;     // a protected variable inherited 
}
void derived::display()
{
    cout << "Data 1 = " << getdata1() << endl;
    cout << "Data 2 = " << getdata2() << endl;
    cout << "Data 3 = " << data3 << endl;
}
int main()
{
    derived d;         //object of derived class
    d.setdata();       //using function of base class
    d.process();
    d.display();

    return 0;
}