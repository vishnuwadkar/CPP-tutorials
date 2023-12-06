#include<iostream>
#include<vector>        //headerfile for vectors
using namespace std;

void display(vector<int> &v){       //display function that takes a vector as a parameter and displays the vector
    cout<<"The vector is: ";
    for (int i=0; i<v.size(); i++){     //size() used to determine the size of the vector
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;       //creation of a vector
    int element, size;
    cout<<"Enter the size of the vector: ";
    cin>>size;      //taking size as an input
    for(int i=0;i<size;i++){
        cout<<"Enter the element: ";
        cin>>element;
        vec1.push_back(element);      //push_back() function used to add elements to the vectors
    }
    display(vec1);
    vec1.pop_back();    //pop_back() function removes the last element of the vector
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();  //an iterator named 'iter' that points the begin of vector
    vec1.insert(iter,5);    //insert() fucntion that inserts the element before the iter pointer
    vec1.insert(iter+1,6);  //even this type of argument works
    vec1.insert(iter+2,3,0);
    display(vec1);

    return 0;
    }