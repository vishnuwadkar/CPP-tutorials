//the below cpp program explains about constructor overloading

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex()           //a default constructor
    {
        a = 0;
        b = 0;
    }
    complex(int x)      //a constructor which takes one parameter
    {
        a = x;
        b = 0;
    }
    complex(int x, int y)  // a constructor which takes two paramters
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << "The given numbers are " << a << " and " << b << endl;
    }
};

int main()
{
    complex c1;
    complex c2(3);
    complex c3(4, 5);

    c1.print();
    c2.print();
    c3.print();

    return 0;
}
