#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6,};
    int target=6;
    int size= sizeof(arr)/sizeof(arr[0]);
    
    for (int i=0; i<size;i++ ){
        for (int j=0; j<size;j++){
            if ((arr[i]+arr[j]== target)){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                break;
            }
        }
    }
    return 0;

}