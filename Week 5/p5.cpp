//Write a C++ Program to reverse the position of the array element (Hint: First element to the last element.)

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

void revArray(int arr[NUM],int num){
    for(int i=0;i<num/2;i++){
        int temp=arr[i];
        arr[i]=arr[num-i-1];
        arr[num-i-1] = temp;
    }
}

void revPosition(int arr[NUM],int num,int position){
        int temp=arr[position-1];
        arr[position-1]=arr[num-position];
        arr[num-position] = temp;
    }


int main(){
    int num;
    int arr[NUM];
    
    int position;

    cout<<"enter number of elements in array: ";
    cin>>num;

    cout<<"enter elements in array: "<<endl;
    inputArray(arr,num);

    cout<<"Elements in array is:"<<endl;
    displayArray(arr,num);

    //revArray(arr,num);
    
    cout<<endl<<"enter the position of element: ";
    cin>>position;
    revPosition(arr,num,position);

    cout<<endl<<"Reversed array is: ";
    displayArray(arr,num);
}
