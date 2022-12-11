#include <iostream>

/*HW_93 by:R.Abbasi*/
using namespace std;
const int n=10;

main() {
	int a[n];
	int i=0;
	
//creating fibonacci series

	for (i=0;i<n;i++){
		if (i<2){
			a[i]=1;
		}
		else{
			a[i]=a[i-1]+a[i-2];
		}
	}
	
	cout<<endl;
	cout<<" fibonacci numbers: [ ";
	for(i=0;i<n;i++){
		cout<<a[i];
		if(i<n-1){
			cout<<" , ";
		}
	
	}
	cout<<" ]";
	
	return 0;
}