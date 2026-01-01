#include <iostream>
using namespace std;
void gcd(int x,int y){
	int z;
	z=x%y;
	x=y;
	y=z;
	if(y!=0){
		gcd(x,y);
	}
else{
	cout<<"gcd="<<x;
}
}
int main(){
	int a,b;
	cout<<"Enter the first number=";
	cin>>a;
	cout<<"Enter second number=";
	cin>>b;
	gcd(a,b);

}
