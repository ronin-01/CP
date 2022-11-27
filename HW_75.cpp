#include <iostream>
#include <math.h>
// calculates sum of prime numbers less than given n by:R.Abbasi
using namespace std;

int main() {
	int n,flag,i,j,k;
	cout<<" Hello! i will calculate sum of prime numbers less than any given integer\n";
	cout<<" please enter value for n \n";
	cout<<" n= ";
	cin>>n;
	k=0;
	for (j=2;j<=n;j++){

	flag=1;
	for(i=2; i<=j/2;i++){
		if(j%i==0){
			flag=0;
			break;
		}
	}
	if (flag==1){
		k=k+j;
		
	}
	
}
	cout<< " "<<k;
}
	