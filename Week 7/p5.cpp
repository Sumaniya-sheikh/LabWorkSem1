// Develop a C++ program to find the greatest of two numbers using this pointer, which returns the member variable

#include<iostream>
using namespace std;

class Greatest{
private:
int num1,num2;
public:
Greatest(int num1,int num2){
this->num1=num1;
this->num2=num2;
}
int greatest(){
if(this->num1 > this->num2){
return num1;
}else {
return num2;
}
}
bool isEqual() {
return this->num1 == this->num2;
}

};

int main(){
int num1,num2;
cout<<"enter first number: ";
cin>>num1;
cout<<"enter second number: ";
cin>>num2;
Greatest great(num1,num2);

if(great.isEqual()){
cout<<"both number are equal.";
}else{
cout<<"Greatest of both number is: "<<great.greatest();
}
}
