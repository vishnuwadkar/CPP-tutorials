#include<iostream>
using namespace std;

class shop{
    int itemID[100];
    int itemPrice[100];
    int counter;

    public:
         void initcount(void) {counter=0;}
         void setprice(void);
         void displayprice(void);

};

void shop::setprice(void){
    cout<<"Enter the ID of item no "<<counter + 1 <<endl;
    cin>>itemID[counter];
    cout<<"Enter the price of your item: "<<endl;
    cin>>itemPrice[counter];
    counter++;

}

void shop::displayprice(void){
    for(int i=0; i<counter; i++){
        cout<<"The price of item with ID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
}


int main(){
    shop s;
    s.initcount();
    s.setprice();
    s.setprice();
    s.setprice();
    s.setprice();
    s.displayprice();

    return 0;
}

