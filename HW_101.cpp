#include <iostream>
using namespace std;
/*HW_101 -> calculating Tan x using teylor's expansion, by:R.Abbasi*/


//power function
float pow(float m, int n){
	if(n==0){
		return 1;
	}
	else{
		return m*pow(m,n-1);
	}
}

//factorial function
int fact(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}

int main() {
	float sin,cos,tan;
	float x;
	cout<<" insert x in Radians\n "<<" 180 Degrees = 3.14 Radians"<<endl<<endl;
	cin>>x;
	sin=x-(pow(x,3)/fact(3))+(pow(x,5)/fact(5))-(pow(x,7)/fact(7))+(pow(x,9)/fact(9))-(pow(x,11)/fact(11));
	cout<<" sin "<<x<<"= "<<sin<<endl;
	cos=1-(pow(x,2)/fact(2))+(pow(x,4)/fact(4))-(pow(x,6)/fact(6))+(pow(x,8)/fact(8))-(pow(x,10)/fact(10));
	cout<<" cos "<<x<<"= "<<cos<<endl;
	tan=sin/cos;
	cout<<" tan "<<x<<"= "<<tan;
	return 0;
}