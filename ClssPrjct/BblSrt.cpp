#include <iostream>

//Bubble Sort
using namespace std;
const int n=15;

main() {
	int a[n];
	int i=0;
	int t=0;
	int j;
	
	cout<<"\n Hello! i will sort numbers and will show process\n";
	cout<<" enter "<< n << " integer number\n";
	for (i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<" initial order of  a= ";
	for(i=0;i<n;i++){
		cout<<" "<<a[i]<<" ";
	}
	cout<<endl<<endl;
	
	for(j=n-1;j>=0;j--){
		for(i=0;i<j;i++){
			if (a[i]>a[i+1]){
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	
	cout<<" a= ";
	for(i=0;i<n;i++){
		cout<<" "<<a[i]<<" ";
	}
		cout<<endl;
	}	
	

	
	return 0;
}