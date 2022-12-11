#include <iostream>

/*HW_92 by:R.Abbasi*/
using namespace std;
const int n=10;

main() {
	int a[n];
	int i=0;
	int t=0;
	int j;

//getting data	
	cout<<" enter "<< n << " intiger number\n";
	for (i=0;i<n;i++){
		cin>>a[i];
	}
	
//bubble sort	
	for(j=n-1;j>=0;j--){
		for(i=0;i<j;i++){
			if (a[i]>a[i+1]){
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
			}
		}
	}
	
	cout<<" second small number on this series is: "<<a[1];
	

	
	return 0;
}