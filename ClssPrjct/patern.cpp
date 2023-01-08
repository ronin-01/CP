#include <iostream>
using namespace std;
//R.Abbasi
//half pyramid
void pr1();

//inverted half pyramid
void pr2();

//full pyramid
void pr3();

//full inverted pyramid
void pr4(); 

//diamon pattern
void dm();

 main() {
 	int op;
 	cout<<"\n                         Drawing Pyramids of Stars!\n";
 	cout<<"                         *     *     *     *     *  \n\n";
 	do{
 		cout<<"                 1. Print Half Pyramid of Stars\n";
        cout<<"                 2. Print Inverted Half Pyramid of Stars\n";
        cout<<"                 3. Print Full Pyramid of Stars\n";
        cout<<"                 4. Print Inverted Full Pyramid of Stars\n";
        cout<<"                 5. Print Diamond Pattern of Stars\n";
        cout<<"                 6. Exit\n\n";
        cout<<"                 Enter the Choice: ";
        cin>>op;
        cout<<endl<<endl;
        switch(op)
        {
            case 1:
                pr1();
                break;
            case 2:
                pr2();
                break;
            case 3:
                pr3();
                break;
            case 4:
                pr4();
                break;
            case 5:
				dm();
				break;    
            case 6:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
	 }
	 cout<<endl<<endl<<endl;
}
while(op>=1&&op<=5);

	 
	 
	return 0;
}

//half pyramid
void pr1(){
	
	for(int i=1; i<=10; i++){
 		cout<<"                                        ";
 		for(int j=1; j<=i; j++){
 			cout<<"*";
		 }
		 cout<<endl;
	 }
	
};

//inverted half pyramid
void pr2(){
	for(int i=1; i<=10; i++){
	 	cout<<"                                        ";
	 	for(int j=0;j<=(10-i);j++){
	 		cout<<"*";
		 }
		 cout<<endl;
	 }
	
};

//full pyramid
void pr3(){
	 int j=0;
	 for(int i=1; i<=10;i++){
	 	cout<<"                                        ";
	 	for(int s=1;s<=(10-i);s++){
	 		cout<<" ";
		 }
		 while(j!=(2*i)-1){
		 	cout<<"*";
		 	j++;
		 }
		 j=0;
		 
		 cout<<endl;
	 }
	
}

//full inverted pyramid
void pr4(){
	int j=0;
	 for(int i=1;i<=10;i++){
	 	cout<<"                                        ";
	 	for(int s=1;s<i;s++){
	 		cout<<" ";
		 }
		 while(j!=2*(10-i)+1){
		 	cout<<"*";
		 	j++;
		 }
		 j=0;
		 cout<<endl;
	 }
	
}

//diamon pattern
void dm(){
	int j=0;
	 for(int i=1; i<=10;i++){
	 	cout<<"                                        ";
	 	for(int s=1;s<=(10-i);s++){
	 		cout<<" ";
		 }
		 while(j!=(2*i)-1){
		 	cout<<"*";
		 	j++;
		 }
		 j=0;
		 
		 cout<<endl;
	 }
	 j=0;
	 for(int i=1;i<=10;i++){
	 	cout<<"                                        ";
	 	for(int s=1;s<i;s++){
	 		cout<<" ";
		 }
		 while(j!=2*(10-i)+1){
		 	cout<<"*";
		 	j++;
		 }
		 j=0;
		 cout<<endl;
	 }
	
}