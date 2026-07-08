// Write a C++ Program for the Length of a String Using a Pointer.

#include<iostream>
using namespace std;

class String{
private:
char string[100];

public:
void inputString() {
char* str = string;
char ch;
while (true) {
cin.get(ch);              
if (ch == '\n')            
break;
*str = ch;           
str++;
}
*str = '\0';         
}
char* getString(){
return string;
}
void displayString() {
char* str = string;
while (*str != '\0') {         
cout << *str;             
str++;                     
}
cout << endl;
}
int len(){
char* str =  string;
int count=0;
while (*str != '\0') {         
count++;         
str++;                     
}
return count;
}
};

int main() {
String string;

cout << "Enter a string: ";
string.inputString();
cout << "String is: ";
string.displayString();  

cout<<"No. of vowels in string is: "<<string.len()<<endl;
return 0;
}
