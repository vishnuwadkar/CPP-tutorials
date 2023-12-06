#include<iostream>
#include<map>
#include<string>
using namespace std;

//Map is an associative array
int main(){
    map<string, int> mymap;     //creation of a map 'mymap' with a string and interger pair
    mymap["HARRY"]=99;          //first key value pair
    mymap["BINGO"]=9;
    mymap["RAKESH"]=70;
    mymap["ROHAN"]=18;

    map<string,int> :: iterator iter;   //creating an iterator named 'iter'
    for(iter=mymap.begin();iter!=mymap.end();iter++){   //begin() and end() function used 
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }       //   ^      ^                   
    //           |    prints the first element of pair while second prints the second element
    //  dereferencing

    return 0;
}