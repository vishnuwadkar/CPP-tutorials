#include <iostream>
using namespace std;

class employee // This is a base class
{
public: // public variables of base class
    int id;
    float salary;
    employee() {}   // a default constructor
    employee(int a) // constructor that takes id and sets value of salary
    {
        id = a;
        salary = 4500;
    }
    void getdata() // get data function
    {
        cout << "ID:" << id << "\nSalary: " << salary << endl;
    }
};

// syntax of inheritance
class programmer : public employee // a derived class with access mode
{
    int skills;

public:
    programmer() {}
    programmer(int a)
    {
        id = a; // variable "id" inherited from employee class
        salary = 6000;
        cout << "How many languages do you know?" << endl;
        cin >> skills;
    }

    void getdata()
    {
        cout << "ID:" << id << "\t\t"
             << "Salary: " << salary << endl
             << "Languages known: " << skills << endl;
    }
};

int main()
{
    employee harry(0), mukesh(1), rakesh(2); // objects of employee class
    programmer john(6), jacob(3), david(4);  // objects of programmer class
    harry.getdata();                         // getdata function call
    mukesh.getdata();
    rakesh.getdata();
    john.getdata();
    jacob.getdata();
    david.getdata();

    return 0;
}
