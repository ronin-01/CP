#include <iostream>

using namespace std;

int sigma(int n) {
  if (n>=1){
  	return n+sigma(n-1);
  }
  else {
  	return 0;
  }
}

int main() {
	int n;
	cout<<" sigma i, i=0 to i=n \n";
	cout<<" enter an intiger valus as n \n";
	cout<<" n= ";
	cin>>n;
	int result=sigma(n);
	cout<<" result is "<<result;
  return 0;
}