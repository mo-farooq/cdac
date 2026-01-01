#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,q=0,i,temp;
	cout<<"Enter the five digit number=";
	cin>>n;
	for(i=0;i<5;i++){
		temp=n%10;
		n=n/10;
		if(temp==9){
			temp=0;
		}
		else{
		temp=temp+1;
		}
		q=temp*pow(10,i)+q;
	}
	cout<<"result="<<q<<endl;
	return 0;
}
