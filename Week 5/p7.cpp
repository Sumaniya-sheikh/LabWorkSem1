//Write a C++ program to count and display positive, negative, odd, and even numbers in an array.

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

int positiveNum(int arr[NUM],int num){
    int positive=0;
    for(int i=0;i<num;i++){
        if(arr[i]>0){
            positive++;
            cout<<arr[i]<<" ";
        }
    }
    return positive;
}

int negativeNum(int arr[NUM],int num){
    int negative=0;
    for(int i=0;i<num;i++){
        if(arr[i]<0){
            negative++;
            cout<<arr[i]<<" ";
        }
    }
    return negative;
}

int evenNum(int arr[NUM],int num){
    int even=0;
    for(int i=0;i<num;i++){
        if(arr[i]%2==0){
            even++;
            cout<<arr[i]<<" ";
        }
    }
    return even;
}

int oddNum(int arr[NUM],int num){
    int odd=0;
    for(int i=0;i<num;i++){
        if(arr[i]%2!=0){
            odd++;
            cout<<arr[i]<<" ";
        }
    }
    return odd;
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

    cout<<endl<<endl<<"+ve numbers are: ";
    cout<<endl<<"Total +ve number of array is: "<<positiveNum(arr,num)<<endl;

    cout<<endl<<"-ve numbers are: ";
    cout<<endl<<"Total -ve number of array is: "<<negativeNum(arr,num)<<endl;

    cout<<endl<<"even numbers are: ";
    cout<<endl<<"Total even number of array is: "<<evenNum(arr,num)<<endl;

    cout<<endl<<"odd numbers are: ";
    cout<<endl<<"Total odd number of array is: "<<oddNum(arr,num)<<endl;
}
