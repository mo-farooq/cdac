#include <iostream>
#include<cmath>
using namespace std;
void is_prime(int n){
	int sr,div=0,sum=0;
	sr=sqrt(n);
	for(int j=0;j<=sr;j++){
		div=n%j;
		if(div==0){
			sum=sum+1;
		}
		else{
			continue;
		}
	}	
	if(sum==1){
		cout<<"Number is prime"<<endl;
	}
	else{
		cout<<"Number is not prime"<<endl;
	}
}
int main(){
	int num;
	cout<<"Enter number="<<num;
	is_prime(num);
}
