#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //writing the file

    //connetcing our file with with myfile stream i.e creating a connection betn file and program
    ofstream myfile("sample.txt");
    //taking the string input from user
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    //writing the string to the desired file
    myfile<<"My name is "+name;

    myfile.close();
    //closes the connection between the prog and file


    //reading the file
    
    ifstream ifobj("sample.txt");
    string content;
    getline(ifobj,content);     //copies the whole line
    cout<<"The content of the file is : "<<content;

    return 0; 
}