#include <iostream>
using namespace std;
/*HW_102 -> recursive function of powering operator, by:R.Abbasi*/

//power function --> every even number=2k  => x^2k= x^k * x^k | and ---> every odd number=2k+1 => x^(2k+1)=x^k * x^k * x
float pow(int x, int y){
	if(y==0){
		return 1;
	}
	else if(y%2==0){
		return pow(x,y/2)*pow(x,y/2);
	}
	
	else{
		return pow(x,y/2)*pow(x,y/2)*x;
	}
}


int main() {
	int m,n;
	cout<< " this program will calculate m^n"<<endl;
	cout<<" insert an integer as m: ";
	cin>>m;
	cout<<" insert an integer as n: ";
	cin>>n;
	cout<<m<<"^"<<n<<" = "<<pow(m,n);
	
	return 0;
}