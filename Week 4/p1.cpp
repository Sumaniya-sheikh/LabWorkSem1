//Write a C++ program to check whether a number is even or odd using ternary operator.

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    (a%2==0)?cout<<"number "<<a<<" is even":cout<<"number "<<a<<" is odd";
}