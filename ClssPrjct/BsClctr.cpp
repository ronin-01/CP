#include <iostream>
using namespace std;

//base converter, works just for positive integer numbers :) by:R.Abbasi 

string bs2(int n) {
    if (n==0) return "0";
    else if (n==1) return "1";
    else if (n%2 == 0) return bs2(n/2) + "0";
    else if (n%2 != 0) return bs2(n/2) + "1";
}
string bs8(int n) {
    if (n==0) return "0";
    else if (n==1) return "1";
    else if (n==2) return "2";
    else if (n==3) return "3";
    else if (n==4) return "4";
    else if (n==5) return "5";
    else if (n==6) return "6";
    else if (n==7) return "7";
    else if (n%8 == 0) return bs8(n/8) + "0";
    else if (n%8 == 1) return bs8(n/8) + "1";
    else if (n%8 == 2) return bs8(n/8) + "2";
    else if (n%8 == 3) return bs8(n/8) + "3";
    else if (n%8 == 4) return bs8(n/8) + "4";
    else if (n%8 == 5) return bs8(n/8) + "5";
    else if (n%8 == 6) return bs8(n/8) + "6";
    else if (n%8 == 7) return bs8(n/8) + "7";
}

string bs16(int n) {
    if (n==0) return "0";
    else if (n==1) return "1";
    else if (n==2) return "2";
    else if (n==3) return "3";
    else if (n==4) return "4";
    else if (n==5) return "5";
    else if (n==6) return "6";
    else if (n==7) return "7";
    else if (n==8) return "8";
    else if (n==9) return "9";
    else if (n==10) return "A";
    else if (n==11) return "B";
    else if (n==12) return "C";
    else if (n==13) return "D";
    else if (n==14) return "E";
    else if (n==15) return "F";
    else if (n%16 == 0) return bs16(n/16) + "0";
    else if (n%16 == 1) return bs16(n/16) + "1";
    else if (n%16 == 2) return bs16(n/16) + "2";
    else if (n%16 == 3) return bs16(n/16) + "3";
    else if (n%16 == 4) return bs16(n/16) + "4";
    else if (n%16 == 5) return bs16(n/16) + "5";
    else if (n%16 == 6) return bs16(n/16) + "6";
    else if (n%16 == 7) return bs16(n/16) + "7";
    else if (n%16 == 8) return bs16(n/16) + "8";
    else if (n%16 == 9) return bs16(n/16) + "9";
    else if (n%16 == 10) return bs16(n/16) + "A";
    else if (n%16 == 11) return bs16(n/16) + "B";
    else if (n%16 == 12) return bs16(n/16) + "C";
    else if (n%16 == 13) return bs16(n/16) + "D";
    else if (n%16 == 14) return bs16(n/16) + "E";
    else if (n%16 == 15) return bs16(n/16) + "F";
}

main() {
	cout<<"                                *---------------*\n";
	cout<<"                                | Base Converter|\n";
	cout<<"                                *---------------*\n";
	cout<<"             converts numbers from decimal to binary, octal and hex\n";
	cout<<"             ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";
	int choise;
	do{
	cout<< "                              1.decimal to binary\n";
	cout<< "                              2.decimal to octal\n";
	cout<<"                              3.decilam to hex\n";
	cout<<"                              4.exit\n";
	cout<<"                               - - - - - - - - - \n\n";
	int num;
	string rslt;
		cout<<" enter your choise (1-5):  ";
		cin>>choise;
		if(choise>=1 && choise<=3){
			cout<<"\n\n";
			cout<<"       enter a positive integer number: ";
			cin>>num;
			switch(choise){
				case 1:
					rslt=bs2(num);
					cout<< " base 2:   "<< rslt<<endl;
					break;
				case 2:
					rslt=bs8(num);
					cout<<" octal base:     "<<rslt<<endl;
					break;
				case 3:
					rslt=bs16(num);
					cout<<" hex :          "<<rslt<<endl;
					break;
				case 4:
				   return 0;
				   break;
				default:
					cout<<" wrong choise\n";
					break;
				
			}
			cout<<"-------------------------------------------------------------------------\n";
		}
	}
	while(choise!=4);
	return 0;
}