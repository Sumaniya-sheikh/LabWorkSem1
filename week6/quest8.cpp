#include<iostream>
using namespace std;

int main(){
	
	int num;
	cout<<"enter the number of element = ";
	cin>>num;
	
	
	int arr[50];
	cout<<"Enter the elements of array = "<< num<<endl;
	for(int i=0; i<num;){
		cin>>arr[i];
		i++;
	}


	int *ptr= arr;
		int sum=0;
		for(int i=0; i<num; i++){
		cout<<"index"<< i <<" -> "<<*(ptr+i)<<endl;		
		sum = sum + *(ptr+i);
		}
		
		
		cout<<"Sum of elements is = "<<sum<<endl;
 		cout<<endl;
}
