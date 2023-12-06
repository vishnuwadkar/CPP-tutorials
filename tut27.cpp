#include<iostream>
#include<math.h>
using namespace std;

class Point
{
    friend int dist(point, point);
        int x, y;
        Point(int a, int b){
            x=a;
            y=b;
        }
        void printnum(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
};


int dist(Point m, Point n){
    double p=sqrt((m.x-n.x)+(m.y-n.y));
    return p;
}

int main(){
    Point x(70,0);
    Point y(1,0);
    x.printnum();
    y.printnum();
    double distance =dist(x,y);
    cout<<"The dsiatnce between the two points is "<<distance<<endl;
    return 0;
}