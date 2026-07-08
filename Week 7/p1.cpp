// Write a C++ Program to Count vowels in a String Using a Pointer.

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
int countVowels(){
char* str =  string;
int count=0;
while (*str != '\0') {         
if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' || *str=='A' || *str=='E' || *str=='I' || *str=='O'|| *str=='U'){
count++;
}           
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

cout<<"No. of vowels in string is: "<<string.countVowels()<<endl;
return 0;
}
