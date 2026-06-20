#include<iostream>
#include <string>
using namespace std;

int main(){
	
	string word;
	cout<<"enter a string = ";
	cin>>word;
	
	string *str;
	str = &word;
	cout<<"Entered string is = "<<*str<<endl;
	
	
//	cout<<*str<< endl; // it will store the value of word
//	cout<<str<<endl; // it will store the address of word
//	cout<<&str<<endl; //it will store the address its own
//	cout<<word<<endl;; //it will give the value to word
//	cout<<&word<<endl; // it will give the address of word
//	
}
