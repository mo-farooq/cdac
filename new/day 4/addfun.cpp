#include<iostream>
using namespace std;
void Add(int *n[]){
	int Sum=0;
	for(int j=0;j<4;j++){
		Sum=Sum+n[j];
	}
	cout<<"sum="<<Sum<<endl;
}
int main(){
	int num[4]={0},i;
	for(i=0;i<4;i++){
		cout<<"Enter number no."<<i+1<<"=";
		cin>>num[i];
	}
	Add(&num);
	return 0;
}
