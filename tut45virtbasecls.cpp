#include<iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void setRollNo(int r){
            roll_no = r;
        }
        void dispnum(){
            cout<<"Roll no: "<<roll_no<<endl;
        }
};

class marks : virtual public student{
    protected:
        int maths, phy;
    public:
        void setmarks(float a, float b){
            maths = a;
            phy= b;
        }
        void displaymarks(){
            cout<<"The marks are:"<<endl
                <<"Maths: "<<maths<<endl
                <<"Physics: "<<phy<<endl;
        }
};

class sports : virtual public student{
    protected:
        float score;
    public:
        void setscore(int a){
            score = a;
        }
        void dispscore(){
            cout<<"Sports: "<<score<<endl;
        }
};

class result : public sports, public marks{
    private:
        float result = maths + phy + score;
        float final= result/3;
    public:
        void dispres(){
            dispnum();
            displaymarks();
            dispscore();
            cout<<"Result is: "<<final<<endl;
        }
};

int main(){
    result r;
    r.setRollNo(67);
    r.setmarks(85, 90);
    r.setscore(95);
    r.dispres();

    return 0;
}