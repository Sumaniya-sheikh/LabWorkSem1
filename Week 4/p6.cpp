//A character is entered through keyboard. Write a C++ program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol using if-else and switch case. The following table shows the Department of Computer Science/Lab Manual/CAMS-1P01 Page 35 range of ASCII values for various characters. Characters ASCII values A – Z: 65 – 90, a – z: 97 – 122, 0 – 9: 48 – 57 Special symbols 0 – 47, 58 – 64, 91 – 96, 123 – 127

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter character: ";
    cin>>ch;

    int char_type;
    if (65<=ch && ch<=90){
        char_type=1;
    }else if (97<=ch && ch<=122){
        char_type=2;
    }else if (48<=ch && ch<=57){
        char_type=3;
    }else if ((0<=ch && ch<=47)||(91<=ch && ch<=96)||(123<=ch && ch<=127)){
        char_type=4;
    }

    switch (char_type)
    {
    case 1:
        cout<<"character is Capital letter";
        break;
    case 2:
        cout<<"character is small letter";
        break;
    case 3:
        cout<<"character is number";
        break;
    case 4:
        cout<<"character is special symbol";
        break;
    
    default:
        cout<<"invalid character";
        break;
    }
}