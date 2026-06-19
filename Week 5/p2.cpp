//Write a C++ program to find the sum of all the array elements.

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

int sumArray(int arr[NUM],int num,int sum=0){
    for (int i=0;i<num;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int num;
    int arr[NUM];
    int sum;

    cout<<"enter number of elements in array: ";
    cin>>num;

    cout<<"enter elements in array: "<<endl;
    inputArray(arr,num);

    cout<<"Elements in array is:"<<endl;
    displayArray(arr,num);

    sum = sumArray(arr,num);
    cout<<endl<<"Sum of elements of array is: "<<sum;
}
