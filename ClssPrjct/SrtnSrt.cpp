#include <iostream>

/*Insertion sort . R.Abbasi*/
using namespace std;

const int n=10;
main() {
	int a[n];
	int i=0;
	int t=0;
	int j;
	int key;
	
	
	cout<<endl<<endl;
	
	cout<<" enter "<<n<<" intiger numbers\n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
//insertion sort
	cout<<" sorted\n"	;
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