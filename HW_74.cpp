#include <iostream>
//by: R.Abbasi
using namespace std;

 main() {
 	cout<<" Euclidean algorithm for finding GCD of two integer number\n";
 	int m,n,t;
	cout<<" enter value for n ";
	cin>>n;
	cout<<" enter value for m ";
	cin>>m;
	while (m!=0){
		t=n%m;
		n=m;
		m=t;
	}
	cout<<" GCD= "<<n;
	return 0;
}