#include<iostream>
using namespace std;

int bubblesort(int arr[]){
    int n = 10;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
        std::swap(arr[i],arr[i+1]);
        return arr[i];
        }
    }
}

int main(){
    int arr[10] = {5,3,8,1,5,3,9,2,6,7};
    bubblesort(arr);
    cout<<arr[10];

    return 0;
}

