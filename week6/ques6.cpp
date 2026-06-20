#include<iostream>
#include <string>
using namespace std;

int main(){
	string word1 , word2, merge;
	cout<<"enter a word = " <<endl;
	cin>>word1;
	cout<<"enter second word = " <<endl;
	cin>>word2;
	
	string *ptr1, *ptr2;
	
	ptr1 = &word1;
	ptr2 = &word2;
	
	merge = *ptr1 + " " + *ptr2;
	
	cout<<merge;
}
