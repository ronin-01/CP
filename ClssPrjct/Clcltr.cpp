#include <iostream>
using namespace std;

//4 major operations by: R.Abbasi 

float add(float a,float b){
	float rslt;
	return(a+b);
}

float sub(float a,float b){
	return(a-b);
}

float mult(float a, float b){
	return(a*b);
}

float div(float a, float b){
	return(a/b);
}

main() {
	float num1,num2,rslt;
	int option;
	cout<<"                             Calculator\n";
	cout<<"                      Basic Arithmetic Operation\n";
	cout<<"                    ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";
	do{
	cout<<"                           1.Addition\n";
	cout<<"                           2.Subtraction\n";
	cout<<"                           3.Multiplication\n";
	cout<<"                           4.Division\n";
	cout<<"                           5.Exit\n";
	cout<<"                            - - - - - \n";
	cout<<"            enter your choice(1-5):  ";
	cin>>option;	
	if(option>=1&&option<=4){
		cout<<"          enter any two numbers:\n ";
		cout<<"                           ";cin>> num1;
		cout<<"                            ";cin>> num2;
		switch(option){
			case 1:
				rslt=add(num1,num2);
				cout<<"                               "<<num1<<"+"<<num2<<"="<<rslt;
				break;
			case 2:
				rslt=sub(num1,num2);
				cout<<"                               "<<num1<<"-"<<num2<<"="<<rslt;
				break;
			case 3:
				rslt=mult(num1,num2);
				cout<<"                               "<<num1<<"*"<<num2<<"="<<rslt;
				break;         
			case 4:
				rslt=div(num1,num2);
				cout<<"                               "<<num1<<"/"<<num2<<"="<<rslt;
				break;
			case 5:
				return 0;
				break;
			default:
				cout<<"                    "<<" \n Wrong choise\n";	
				break;		
		}
		cout<<"  \n---------------------------------------------------------\n";
		
		
	}
	}
	while(option!=5);
	
	return 0;
}

