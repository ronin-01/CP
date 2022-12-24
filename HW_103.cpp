#include <iostream>
using namespace std;
/*HW_103 -> recursive function of the Euclidean Algorithm of GCD, by:R.Abbasi */

//The Euclidean Algorithm of GCD
int gcd(int x, int y){
	if(x%y==0){
		return y;
	}
	else{
		return gcd(y, x%y);
	}
}


int main() {
	int m,n;
	cout<<" please enter two integer numbers as m and n"<<endl;
	cin>>m;
	cin>>n;
	cout<<"gcd of "<<m<<" and "<<n<<" : "<<gcd(m,n);

	return 0;
}