// SYNTAX FOR INHERITING IN MULTIPLE INHERITANCE
//  class {{derived}} : visibility mode {{base 1}} , visibility mode {{base 2}}

#include <iostream>
using namespace std;

class base1 // base class 1
{
protected:
    int base1int; // protected member of base 1 class

public:
    void setbase1int(int a) // function that sets the value of base1int
    {
        base1int = a;
    }
};

class base2 // base class 2
{
protected: // protected member of class 2
    int base2int;

public:
    void setbase2int(int a) // function that sets the value of base2int
    {
        base2int = a;
    }
};

class derived : public base1, public base2 // a derived class that uses members of base1 and base2
{
public:
    void show()
    {
        cout << "The value of Base 1 int is: " << base1int << endl;
        cout << "The value of Base 2 int is: " << base2int << endl;
    }
};

int main()
{
    derived vish; // object creation of derived class
    vish.setbase1int(2);
    vish.setbase2int(6);
    vish.show();
    return 0;
}