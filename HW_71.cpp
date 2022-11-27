#include <iostream>
// calculates m to the power of n. by: R.Abbasi
using namespace std;

main() {
	cout<<" will calculate first number to the power of second number\n";
	int n,m;
	cout<<" please enter first value as m= ";
	cin>> m;
	cout<<" please enter second value as n= ";
	cin>>n;
	int i=1;
	int p=1;
	while(i<=n){
		p=p*m;
		i++;
	}
	cout<<" "<< m<<"^"<<n<<"="<<p;
	return 0;
}