//Write a C++ program to find the frequency of a particular number in a list of integers.

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

int freq(int arr[NUM],int num, int number){
    int frequency=0;
    for (int i=0;i<num;i++){
        if(arr[i]==number){
            frequency++;
        }
    }
    return frequency;
}

int main(){
    int num;
    int arr[NUM];
    int number;

    cout<<"enter number of elements in array: ";
    cin>>num;

    cout<<"enter elements in array: "<<endl;
    inputArray(arr,num);

    cout<<"Elements in array is:"<<endl;
    displayArray(arr,num);

    cout<<endl<<"enter number to find its frequency: ";
    cin>>number;

    cout<<"frequency of "<<number<<" is: "<<freq(arr,num,number);

}
