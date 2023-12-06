#include<iostream>
#include<fstream>
using namespace std;

int main(){
  // string st="I am a boy";
  // //opening and writing file using constructor
  // ofstream out("sample.txt");    //object of ofstream class
  // out<<st;     //writes the given string in the text file

    string st2;
    //opening the file with a constructor
    ifstream in("sample.txt");     //object of ifstream class named and the constructor takes file's name as argument
    in>>st2;    //stores content of file in the string however only the first word
    cout<<st2<<endl;
    //to get the whole line, we use the getline() function
    getline(in, st2);
    cout<<st2;
    return 0;
}