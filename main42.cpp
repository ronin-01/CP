#include <iostream>

/* homework 4 part 2. Abbasi */
using namespace std;
main() {
	float x,y,z,e1,e2,e;
	cout<<"  please enter first float number for x= ";
	cin>>x;
	cout<<"  now please enter second float number for y= ";
	cin>>y;
	cout<<"  now please enter third float number for z= ";
	cin>>z;
	e1=(x-y)*(x+z);
	e2=((x+y+z)*(x+y+z))+1;
	e=e1/e2;

	cout<<" (x-y)*(x+z)/((x+y+z)^2+1) = "; cout<< e;  cout<<"\n";
}