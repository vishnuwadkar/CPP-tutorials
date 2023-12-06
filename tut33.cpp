#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << "+i" << b << endl;
    }
};

int main()
{
    complex c1;
    c1.display();

    complex c2(6);
    c2.display();

    complex c3(7, 8);
    c3.display();

    return 0;
}
