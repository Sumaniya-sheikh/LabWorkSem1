// Write a C++ program to use this pointer and return the pointer reference.

#include<iostream>
using namespace std;

class Num{
private:
int num;

public:
void setter(int num){
this->num=num;
}
int* getter(){
return &num;
}
};

int main(){
int a;
cout<<"Enter number: ";
cin>>a;

Num num;
num.setter(a);

cout<<"Address of a is: "<<(num.getter())<<endl;
cout<<"Value of a is: "<<*(num.getter())<<endl;

}
