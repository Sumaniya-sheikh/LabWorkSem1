// Write a C++ program to enter elements in the array and display the array elements.

#include<iostream>
const int NUM=100;
using namespace std;

void inputArray(int arr[NUM],int num){
    for (int i=0;i<num;i++){
        cin>>arr[i];
    }
}

void displayArray(int arr[NUM],int num){
    for (int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int num;
    
    cout<<"enter number of elements in array: ";
    cin>>num;
    
    int arr[num];
    cout<<"enter elements in array: "<<endl;
    inputArray(arr,num);

    cout<<"Elements in array is:"<<endl;
    displayArray(arr,num);
}
