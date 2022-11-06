#include <iostream>

/* homework 4 part 1. Abbasi */
using namespace std;
main() {
	float a,b,sm,sb,pr,di;
	cout<<" please enter first float number for a= ";
	cin>>a;
	cout<<" now please enter second float number for b= ";
	cin>>b;
	sm=a+b;
	sb=a-b;
	pr=a*b;
	di= a/b;
	cout<<" a + b = "; cout<< sm;  cout<<"\n";
	cout<<" a - b = "; cout<< sb;  cout<<"\n";
	cout<<" a * b = "; cout<< pr;  cout<<"\n";
	cout<<" a / b = "; cout<< di;  cout<<"\n";
	
//note: calculating module of two float number on c is not possible and concludes errors	
}
