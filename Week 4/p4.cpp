// A Fibonacci sequence is defined as follows: The first and second terms in the sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms in the sequence. Write a C++ program to generate the first n terms of the sequence.

#include<iostream>
using namespace std;

int main(){

    int a=0;
    int b=1;
    int c;

    int n;
    cout<<"enter no. of terms";
    cin>>n;

    cout<<"fibonacci Sequence is: "<<a<<" "<<b;
    c=a+b;
    for(int i =0;i<n-2;i++){
        cout<<" "<<c;
        a=b;
        b=c;
        c=a+b;
    }

}