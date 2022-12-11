#include <iostream>

/*HW_91 by: R.Abbasi */
using namespace std;

const int n=10;
main() {
	int a[n]={8,-12,56,-214,62,0,21,19,42};
	int i=0;
	int t=0;
	int j;
	int key;
	
	cout<<endl;	
	cout<<" initial order \n";
	cout<<" a= ";
	for(i=0;i<n-1;i++){
		cout<<" "<<a[i]<<" ";
	}
	cout<<endl<<endl;
	
//bubble sort	
	for(j=n-2;j>=0;j--){
		for(i=0;i<j;i++){
			if (a[i]>a[i+1]){
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	}	
	
//after sorting
	cout<<" after sorting\n ";	
	cout<<" a= ";
	for(i=0;i<n-1;i++){
		cout<<" "<<a[i]<<" ";
	}
		cout<<endl<<endl;
	
	cout<<" enter an intiger number as a[10]= ";
	cin>>a[9];
	cout<<endl;
	
//insertion sort
	cout<<" resorted\n"	;
	for (j=1;j<n;j++){
		key=a[j];
		i=j-1;
		while(i>=0 && a[i]>key){
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
	
	cout<<" a= ";
	for(i=0;i<n;i++){
		cout<<" "<<a[i]<<" ";
	}

	
	return 0;
}