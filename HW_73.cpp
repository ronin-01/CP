#include <iostream>
//by:R.Abbasi
using namespace std;

main() {
	cout<<" calculates sum of divisors of any given integer number \n";
	int n;
	cout<<" please enter value for n ";
	cin>> n;
	int i;
	int k=0;
	for (i=2; i<n; i++){
		if (n%i==0){
			k=k+i;
		}
	}
	cout<<" sum of divisors= "<<k;
	return 0;
}