//Write a C++ program to merge two sorted arrays into another array in sorted order.

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
void mergeSortedArray(int *arr1,int* arr2,int num1,int num2, int *mergedArray) {
    int i=0,j=0,k=0;
    while(j<num1 && k<num2){	
        if (arr1[j]<arr2[k]){
            mergedArray[i++]=arr1[j++];
        }else{
            mergedArray[i++]=arr2[k++];
        }
    }
    while(j<num1){
    	mergedArray[i++]=arr1[j++];
	}
	while(k<num2){
    	mergedArray[i++]=arr2[k++];
	}

}

int main(){
    int num1;
    int arr1[NUM];

    int num2;
    int arr2[NUM];

    int mergedArray[NUM];

    cout<<"enter number of elements in array: ";
    cin>>num1;
    cout<<"enter elements in array: "<<endl;
    
    inputArray(arr1,num1);

    cout<<"enter number of elements in array: ";
    cin>>num2;
    cout<<"enter elements in array: "<<endl;
    inputArray(arr2,num2);

    cout<<"Elements in array is:"<<endl;
    displayArray(arr1,num1);
    cout<<endl<<"Elements in array is:"<<endl;
    displayArray(arr2,num2);



    mergeSortedArray(arr1,arr2,num1,num2,mergedArray);
    cout<<endl<<"merged sorted array is:"<<endl;
    displayArray(mergedArray,num1+num2);
}
