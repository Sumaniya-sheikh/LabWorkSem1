//Write a C++ program to check whether a given 3-digit number is an Armstrong number

#include<iostream>
using namespace std;
 int main(){
    int a;
    cout<<"enter a 3 digit number ";
    cin>>a;
    int temp =a;
    int sum=0;
    while (temp>0)
    {
        sum += (temp%10)*(temp%10)*(temp%10);
        temp = temp/10;
    }
    if (sum==a){
        cout<<a<<" is armstrong number";
    }else{
        cout<<a<<" is not a armstrong number";
    }
    
 }