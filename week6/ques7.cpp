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
	
	int *ptr = arr ;
	
	 cout << "Array elements are: " << endl;
    while (ptr < arr + num) { 
        cout<< *ptr << endl;
       
        ptr++; 
    }
}
