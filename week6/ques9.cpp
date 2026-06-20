#include<iostream>
using namespace std;

int main(){
	
	int num;
	cout<<"enter the number of element = ";
	cin>>num;
	
	
	int arr[50];
		int *ptr= arr;
		cout<<"Enter the elements of array = "<< num<<endl;
		for(int i=0; i<num; i++){
		cin>>*(ptr+i);		
		
		}
		
	cout<<"Array elements are = "<<endl;		
	for(int i=0; i<num;){
	cout<<" index "<<i<<" -> "<<arr[i]<<endl;
		i++;
	}
}
