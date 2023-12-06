#include<iostream>
#include<fstream>
#include<string>        //for getline()
using namespace std;

int main(){
    //writng into a file using open
    ofstream obj;       //object of ofstream class
    obj.open("sample.txt"); //opening the desired file
    obj<<"This is a file";  //writing the required string in the opened file
    obj.close();

    //reading a file
    ifstream object;
    object.open("sample.txt");
    string s1,s2;
    object>>s1>>s2;
    cout<<s1<<s2;
    //object.close();

    //the eof func to write the complete text
    while(object.eof()==0){
        getline(object,s1);
        cout<<s1<<endl;
    }
    return 0;
}