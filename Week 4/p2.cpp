//Write a C++ program to perform the addition of two numbers without using + operator.

#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    //int sum = a-(-b);
    int sum = a-(~b)-1;
    cout<<"sum of "<<a<<" and "<<b<<" is "<<sum;
}