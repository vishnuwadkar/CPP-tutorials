#include<iostream>
#include<list>      //header file for using a list
using namespace std;

void display(list<int> &lst){       //display function that takes a list as an argument
    list<int>::iterator iter;       //creating an iterator named 'iter'
    cout<<"The list is: ";
    for(iter=lst.begin();iter!=lst.end();iter++){      //using begin() and end() function from list library
        cout<<*iter<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;        //creation of a integer list 'list1'
    int size;
    cout<<"Enter the size of the list: ";
    cin>>size;
    int e;
    for(int i=0;i<size;i++){    //for loop for adding elements to the list
        cout<<"Enter "<<i+1<<"th element: ";
        cin>>e;
        list1.push_back(e);
    }
    

   // list1.push_back(4);     //push_back() fucntion used to add elements in the list
   // list1.push_back(0);
   // list1.push_back(78);
   // list1.push_back(6);
    display(list1);
   // list1.pop_back();      //pop_back() removes the last element
   list1.sort();            //sort() function from list library 
    display(list1);

    list<int> list2(3);     //creation of another list of 3 empty elements
    list<int>::iterator i=list2.begin();    //creating an iterator that points the first element of the list
    *i = 2;
    i++;
    *i=6;
    i++;
    *i = 4;
    display(list2);

    list1.merge(list2);     //merge() function used to merge two lists
    display(list1);         //displays the merged list
    return 0;
}