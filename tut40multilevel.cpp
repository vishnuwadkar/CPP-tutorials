#include <iostream>
using namespace std;

class student                //a base class
{
protected:                  //protected variable that can only be accessed in derived classes
    int roll_no;

public:                     //public functions 
    void setroll(int);
    void getroll(void);
};

void student::setroll(int r)
{
    roll_no = r;
}
void student::getroll(void)
{
    cout << "Roll no is : " << roll_no << endl;
}

class exam : public student       // a derived class derived from class student
{
protected:
    float maths;
    float phy;

public:
    void setmarks(float, float);
    void getmarks(void);
};

void exam::setmarks(float m1, float m2)
{
    maths = m1;
    phy = m2;
}
void exam::getmarks(void)
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << phy << endl;
}

class result : public exam
{
    float perc = maths + phy / 2;

public:
    void disp()
    {
        getroll();
        getmarks();
        cout << "The result is: " << perc << endl;
    }
};
int main()
{
    result xyz;
    xyz.setroll(67);
    xyz.setmarks(93.0, 88.56);
    xyz.disp();
    return 0;
}

/*
1. If we are inheriting B from A and C from B:   A--->B--->C
    Then A is the base class for B and B is the base class for C
2.ABC is called inheritance path

*/
