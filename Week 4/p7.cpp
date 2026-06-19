//Write a C++ program to find the roots of a quadratic equation.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    float d;
    float root1;
    float root2;
    
    cout<<"enter the value of a (x^2): ";
    cin>>a;
    
        cout<<"enter the value of b (x): ";
    cin>>b;
    
        cout<<"enter the value of c: ";
    cin>>c;
    
    d=sqrt(b*b-4*a*c);

    if (d>0){
    	root1=(-b+d)/(2*a);
    	root2=(-b-d)/(2*a);
    	cout<<"roots of eqaution is real & unequal"<<endl;
    	cout<<"root of equation "<<a<<"x^2 + "<<b<<"x+ "<<c<<" is: "<<root1<<","<<root2;
	}else if (d==0){
    	root1=(-b+d)/(2*a);
    	root2=(-b-d)/(2*a);
    	cout<<"roots of eqaution is real & equal"<<endl;
    	cout<<"root of equation "<<a<<"x^2 + "<<b<<"x+ "<<c<<" is: "<<root1<<","<<root2;
	}else{
		cout<<"Imaginary roots";
	}
}
