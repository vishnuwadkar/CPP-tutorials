#include <iostream>
using namespace std;

float int1;           //global variables 
float int2;

class simplecalc      //base class names simple calc
{

public:
    void add()        //function to add two numbers
    {
        cout << "The addition of the two numbers is: " << int1 + int2 << endl;
    }
    void sub()      //function to subtract two numbers
    {
        cout << "The difference of the two numbers is: " << int1 - int2 << endl;
    }
    void div()      //function to divide two numbers
    {
        cout << "The division is: " << int1 / int2 << endl;
    }
    void mul()      //function to multiply two numbers
    {
        cout << "The product is: " << int1 * int2 << endl;
    }
};

class scientificcalc     //another base class named scientific calculator
{
public:
    void square()        //function to find square of a number
    {
        cout << "The square of " << int1 << " and " << int2 << " is " << int1 * int1 << " and " << int2 * int2 << endl;
    }
    void cube()         //function to find cube of a number
    {
        cout << "The cube of " << int1 << " and " << int2 << " is " << int1 * int1 * int1 << " and " << int2 * int2 * int2 << endl;
    }
};

class hybridcalc : public scientificcalc, public simplecalc     // a derived class derived from simplecalc and scientificcalc
{
public:
    hybridcalc()        //a constructor that initiates on its own to take inputs of int1 and int 2
    {
        cout << "Enter the first number: ";
        cin >> int1;
        cout << "\nEnter the second number: ";
        cin >> int2;
    }
};

int main()
{
    hybridcalc first;      //object of hybridcalc class
    first.add();           //object of derived class using function of simplecalc class
    first.sub();           //object of derived class using function of simplecalc class
    first.mul();           //object of derived class using function of simplecalc class
    first.div();           //object of derived class using function of simplecalc class
    first.square();        //object of derived class using function of scientificcalc class
    first.cube();          //object of derived class using function of scientificcalc class

    return 0;
}