#include <iostream>
//calculates division and modulus without using its operators. by:R.Abbasi
using namespace std;

main() {
	int n,m;
	cout<<" calculates division and modulus without using its operators\n";
	cout<<" please enter value for m \n";
	cin>> m;
	cout<<" please enter value for n\n";
	cin>>n;
	int i=0;
	int s=n;
	while(s>=n){
		s=m-n;
		i++;
		m=s;
	}
	cout<<" division=  "<< i<<"\n";
	cout<<" reminder=  "<<s;
	return 0;
}