#include <iostream>
using namespace std;
void gcd(int x,int y){
	int z;
	while(y!=0){
		z=x%y;
		x=y;
		y=z;
	}
	cout<<"gcd="<<x;
}
int main(){
	int a,b;
	cout<<"Enter the first number=";
	cin>>a;
	cout<<"Enter second number=";
	cin>>b;
	gcd(a,b);

}
