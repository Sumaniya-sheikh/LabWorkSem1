// Write a C++ program to create three objects for a class named pntr_obj with data
// members such as roll_no & name. Create a member function set_data() for setting the
// data values and a print() member function to print which object has invoked it using the
// 'this' pointer.

#include<iostream>
using namespace std;

class Pntr{
private:
int roll_no;
string name;

public:
void setRoll(int roll_no){
this->roll_no=roll_no;
}
void setName(string name){
this->name=name;
}
void displayRoll(){
cout<<"roll no. is: "<<this->roll_no<<endl;
}
void displayname(){
cout<<"name is: "<<this->name<<endl;
}

};

int main(){
int roll;
string name;

Pntr pntr_obj1;
cout<<"Inputs of Object 1: "<<endl;
cout<<"enter roll number: ";
cin>>roll;
cout<<"enter name: ";
cin>>name;
pntr_obj1.setRoll(roll);
pntr_obj1.setName(name);

Pntr pntr_obj2;
cout<<"Inputs of Object 2: "<<endl;
cout<<"enter roll number: ";
cin>>roll;
cout<<"enter name: ";
cin>>name;
pntr_obj2.setRoll(roll);
pntr_obj2.setName(name);

Pntr pntr_obj3;
cout<<"Inputs of Object 3: "<<endl;
cout<<"enter roll number: ";
cin>>roll;
cout<<"enter name: ";
cin>>name;
pntr_obj3.setRoll(roll);
pntr_obj3.setName(name);

cout<<endl<<"Outputs of Objects 1: "<<endl;
pntr_obj1.displayRoll();
pntr_obj1.displayname();

cout<<endl<<"Outputs of Objects 2: "<<endl;
pntr_obj2.displayRoll();
pntr_obj2.displayname();

cout<<endl<<"Outputs of Objects 3: "<<endl;
pntr_obj3.displayRoll();
pntr_obj3.displayname();
}
