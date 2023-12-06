#include<iostream>
using namespace std;

class binary{
    private:
        string s;
    public:
        void read(void);
        void ones(void);
        void display(void);
    private:
            void chk(void);        //pvt member function but can be accessed by nesting
};                                 //semi colon after class declaration is compulsory

void binary::read(void){
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}

void binary::chk(void){            //to be nested
    for(int i=0; i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary::ones(void){
    chk();            //nesting of member function!
    for (int i; i<s.length();i++)
        if(s.at(i)=='0'){
             s.at(i)='1';  
         }
        else if(s.at(i)=='1'){
            s.at(i)=='0';
    }
    
}

void binary::display(void){
    cout<<"Displaying your binary number: "<<endl;
    for (int i=0; i<s.length(); i++){
        cout<<s.at(i);
        
    }
cout<<endl;
}

int main(){
    binary b;

    b.read();
    //b.chk();    without nesting!
    b.display();
    b.ones();
    b.display();

    return 0;
}