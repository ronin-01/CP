#include <iostream>
//HW_81 by:R.Abbasi
//gets numbers and finds max and min of them and calculates average of max and min values.

#define ArraySize 10
using namespace std;

int main() {
	int N[10];
	int i,max,min;
	
	cout<<" enter "<<ArraySize<< " integer numbers\n";
	
	for(i=0; i<ArraySize; i++){
		cout<<" " <<i+1<< ": ";
		cin>>N[i];
	}
	
	max=N[0];
	min=N[0];
	
	for(i=1; i<ArraySize; i++){
		if(N[i]>max){
			max=N[i];
		}
		if(N[i]<min){
			min=N[i];
		}
	}
	
	cout<< "N=[";
	for(i=0;i<ArraySize;i++){
		cout<<N[i];
		if(i<ArraySize-1){
			cout<<",";
		}
	}
	cout<<"]\n\n";
	
	cout<<"max number is: "<<max<<"\n";
	cout<<"min number is: "<<min<<"\n";
		
	float ave=float (max+min)	/2;
	cout<<"average of max and min is :"<<ave;

	
 return 0;
}