#include<iostream>
using namespace std;

int main(){
int a = 4;
int* ptr= &a;       //referencing
cout<<"The value of a is "<<*(ptr)<<endl;     //dereferencing

//The new keyword
float* p= new float(67.11);         //new keyword is used to allocate new memory
cout<<"The value at address p is "<<*(p)<<endl;

int* arr = new int[3];     //dynamically created array in contiguous block of memory
arr[0]=1;
arr[1]=14;
arr[2]=10;

cout<<arr[0]<<endl
    <<*(arr+1)<<endl
    <<arr[2]<<endl;

//the keyword
delete arr;      //this delloactes the memory i.e empties it
//delete[] arr;      deletes the complete array
cout<<arr[0]<<endl       //thus this will give garbage value since arr is deleted
    <<arr[1]<<endl
    <<arr[2]<<endl;
return 0;
}
