#include <iostream>

/* homework 5 part 1: writing salary. by R.Abbasi*/
/* you give the program gross amount of salary and it caculates net value after deducting the appropriate tax.*/

using namespace std;

int main() {
	int ns,gs;
	cout<<" please enter the gross amount of salary in Tomans \n";
	cin>>gs;
	if (gs<6000000){
		ns=gs;
		cout<< " net salary is: "<<ns; cout<<" Tomans";
	}
	else if (6000000<=gs && gs<8000000){
		ns=gs*0.95;
		cout<< " net salary is: "<<ns; cout<<" Tomans";
	}
	else if (8000000<=gs && gs<10000000){
		ns=gs*0.9;
		cout<< " net salary is: "<<ns; cout<<" Tomans";
	}
	else if (10000000<=gs && gs<14000000){
		ns=gs*0.85;
		cout<< "  net salary is: "<<ns; cout<<" Tomans";
	}
	else if (14000000<=gs && gs<18000000){
		ns=gs*0.8;
		cout<< "  net salary is: "<<ns; cout<<" Tomans";
	}
	else if (18000000<=gs && gs<25000000){
		ns=gs*0.75;
		cout<< "  net salary is: "<<ns; cout<<" Tomans";
	}
	else {
		ns=gs*0.65;
		cout<< "  net salary is: "<<ns; cout<<" Tomans";
	}
	return 0;
}