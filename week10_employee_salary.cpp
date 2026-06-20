#include <iostream>
using namespace std; struct Emp{ string name; double basic;}; int main(){ Emp e; cin>>e.name>>e.basic; double gross = e.basic + (e.basic*52.0/100.0); cout<<gross<<"\n"; }