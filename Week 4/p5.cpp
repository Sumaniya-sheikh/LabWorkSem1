//Write a C++ program to generate all the prime numbers between 1 and n, where n is a value supplied by the user.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n";
    cin>>n;

    for (int i=2;i<=n;i++){
        bool isprime=true;
        for (int j=2;j<i;j++){
            if (i%j==0){
                isprime=false;
                break;  
            }
        }
        if(isprime==true){
            cout<<i<<endl;
        }
    }
}