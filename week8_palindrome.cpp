#include <iostream>
#include <cstring>
using namespace std; int main(){char s[100]; cin>>s; int i=0,j=strlen(s)-1; bool pal=true; while(i<j){ if(s[i++]!=s[j--]){ pal=false; break; } } cout<<(pal?"Palindrome":"Not Palindrome")<<"\n"; }