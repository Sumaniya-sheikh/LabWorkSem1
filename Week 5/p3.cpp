//Write a C++ program to find the length of the array.

#include<iostream>
const int NUM=100;
using namespace std;

void inputArray(int arr[],int num){
    for (int i=0;i<num;i++){
        cin>>arr[i];
    }
}

void displayArray(int arr[],int num){
    for (int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
}

int arrLen(int arr2[NUM]){
	cout<<sizeof(arr2)<<endl;
    return (sizeof(arr2)/sizeof(arr2[0]));
}

int main(){
    int num;
    int arr[NUM];
    int len;

    cout<<"enter number of elements in array: ";
    cin>>num;

    cout<<"enter elements in array: "<<endl;
    inputArray(arr,num);

    cout<<"Elements in array is:"<<endl;
    displayArray(arr,num);
	cout<<sizeof(arr)<<endl;
    len=arrLen(arr);
    cout<<endl<<"length of array is: "<<len;
    
}
