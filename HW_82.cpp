#include <iostream>

/* HW_82 by: R.Abbasi */
using namespace std;
main() {
	int A[5],B[5],t[5],i,j;
	
	cout<<" please enter integer values\n";
	
//value for Array A	
	for(i=0;i<5;i++){
		cout<< " A"<< i+1<<": ";
		cin>>A[i];
	}
	cout<<" A=[";
	for (i=0;i<5;i++){
		cout<<A[i];
		if(i<4){
			cout<<",";
		}
	}
	cout<<"]\n\n";
	
//value for Array B	
	for(i=0;i<5;i++){
		cout<< " B"<< i+1<<": ";
		cin>>B[i];
	}
	cout<<" B=[";
	for (i=0;i<5;i++){
		cout<<B[i];
		if(i<4){
			cout<<",";
		}
	}
	cout<<"]\n\n";
	
//now chane Array's elements
	cout<<"array A and B after changing elements is: \n\n";
	for(i=0;i<5;i++){
		t[i]=A[i];
		A[i]=B[i];
		B[i]=t[i];
	}	
	cout<<" A=[";
	for (i=0;i<5;i++){
		cout<<A[i];
		if(i<4){
			cout<<",";
		}
	}
	cout<<"]\n\n";
	
	
		cout<<" B=[";
	for (i=0;i<5;i++){
		cout<<B[i];
		if(i<4){
			cout<<",";
		}
	}
	cout<<"]\n";
	
	return 0;
	
}