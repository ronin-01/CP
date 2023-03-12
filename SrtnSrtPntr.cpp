#include <iostream>
using namespace std;

//Insertion Sort using Pointers by:R.Abbasi

int main() {
	int n;
	int *p;
	int key;
	p= new int[n];
	cout<<"    number of integers that you wish to be sorted "<<endl;
	cout<<"    n = ";
	cin>>n;
	cout<<"        now enter your "<< n<<" integers"<<endl;

	
//getting integers	
	for(int i=0; i<n; i++){
		cout<< "  ";
		cin>>*(p+i);
	}
	cout<<endl;

//showing inserted data
	cout<< "  unsorted: [ ";
	for(int i=0; i<n; i++){
		cout<< *(p+i);
		if(i<n-1){
			cout<<" , ";
		}
	}
	cout<<" ]"<<endl<<endl;
	

//Insertion Sort algorithm
	for(int j=1; j<n; j++){
		key=*(p+j);
		int i=j-1;
		while(i>=0 && *(p+i)>key ){
			*(p+i+1)=*(p+i);
			i=i-1;
		}
		*(p+i+1)=key;
	}
	
//after Sorting
	cout<< "  sorted: [ ";
	for(int i=0; i<n; i++){
		cout<< *(p+i);
		if(i<n-1){
			cout<<" , ";
		}
	}
	cout<<" ]";		
	return 0;
}