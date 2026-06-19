//Write a C++ program to find the second-largest integer in a list of integers. 

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

int secLarNum(int arr[NUM],int num){
    int lar=arr[0];
    int secLar;
    for(int i=0;i<num;i++){
        if(arr[i]>lar){
            secLar=lar;
            lar=arr[i];
        }
    }
    return secLar;
}

int main(){
    int num;
    int arr[NUM];

    cout<<"enter number of elements in array: ";
    cin>>num;

    cout<<"enter elements in array: "<<endl;
    inputArray(arr,num);

    cout<<"Elements in array is:"<<endl;
    displayArray(arr,num);

    cout<<endl<<"Second largest number of array is: "<<secLarNum(arr,num);
}
