#include <iostream>
using namespace std;
int gcd(int x,int y){
	int z;
	while(y!=0){
		z=x%y;
		x=y;
		y=z;
	}
	return x;	
}

void lcm(int x,int y){
	int m=(x*y)/gcd(x,y);

	cout<<"lcm="<<m<<endl;
}
int main(){
	int a,b;
	cout<<"Enter the first number=";
	cin>>a;
	cout<<"Enter second number=";
	cin>>b;
	lcm(a,b);
}
