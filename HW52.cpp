#include <iostream>

/* homework 5 part 2:  by R.Abbasi*/
/* give the program an english letter, it will tell you is it vowel or not*/

using namespace std;

main() {
	char letter;
	cout << "  please enter an english letter in lower case \n";
	cin >> letter;
	switch (letter){
		case 'a':
			cout << letter; cout<< " is Vowel";
			break;
		case 'e':
			cout << letter; cout<< " is Vowel";
			break;
		case 'i':
			cout << letter; cout<< " is Vowel";
			break;
		case 'o':
			cout << letter;cout<< " is Vowel";
			break;
		case 'u':
			cout << letter; cout<< " is Vowel";
			break;
	default :
		cout << letter; cout<< " is not vowel: "; 	
						
			
		
	}
	return 0;
}