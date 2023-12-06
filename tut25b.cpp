#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    int v1;
    void setdata()
    {
        cout << "Enter first number: ";
        cin >> v1;
        int v2;
        cout << "Enter second number: ";
        cin >> v2;
        a = v1;
        b = v2;
    }

    void setdatabysum(complex m, complex n)
    {
        a = m.a + n.a;
        b = m.b + n.b;
        printnum();
    }

    void printnum()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }

    complex()
    {
        cout << "This is a constructor" << endl;
    }

    ~complex()
    {
        cout << "This is a destructor" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdata();
    c1.printnum();

    c2.setdata();
    c2.printnum();

    c3.setdatabysum(c1, c2);

    cout << "Program ends!" << endl;

    return 0;
}