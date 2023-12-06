#include<iostream>
using namespace std;

int vol(int r, int h){              //volume of cylinder
    return(3.14*r*r*h);
}

int vol(int a){                     //VOLUME OF CUBE
    return(a*a*a);
}

int vol(int a, int b, int c){       //volume of cuboid    
    return(a*b*c);
}


int main(){
    cout<<"The volume of cube with side 6 is "<<vol(6)<<endl;
    cout<<"The volume of cuboid with h=2, l=4, w=5 is "<<vol(2,4,5)<<endl;
    cout<<"The volume of cylinder with r=3, h=5 is "<<vol(3,5)<<endl;
    return 0;
}