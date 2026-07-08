// Write a C++ program to implement a flight class with data members as flight number,
// source, destination, and fare. Write a member function to display the flight information
// using this pointer

#include<iostream>
using namespace std;

class Flight{
private:
int flightNumber;
string source;
string destination;
float fare;

public:
Flight(int flightNumber,string source,string destination,float fare){
this->flightNumber=flightNumber;
this->source=source;
this->destination=destination;
this->fare=fare;
}
void flightDetails(){
cout<<endl<<"Flight details are:- "<<endl;
cout<<"Flight Number: "<<this->flightNumber<<endl;
cout<<"Source: "<<this->source<<endl;
cout<<"Destination: "<<this->destination<<endl;
cout<<"Fare: "<<this->fare<<endl;
}
};
int main(){
int flightNumber;
string source;
string destination;
float fare;

cout<<"Enter flight number: ";
cin>>flightNumber;
cout<<"Enter Source: ";
cin>>source;
cout<<"Enter Destination: ";
cin>>destination;
cout<<"Enter Fare: ";
cin>>fare;

Flight flight1(flightNumber,source,destination,fare);
flight1.flightDetails();
}
