#include<iostream>
using namespace std;
void Add(int a,int b,int c,double d){
	cout<<"Addition="<<a+b+c+d<<endl;
}
void Add(int a,int b,double c,double d){
	cout<<"Addition="<<a+b+c+d<<endl;
}
void Add(int a,double b,double c,double d){
	cout<<"Addition="<<a+b+c+d<<endl;
}
void Add(int a,int b,int c,int d){
	cout<<"Addition="<<a+b+c+d<<endl;
}
void Add(double a,double b,double c,double d){
	cout<<"Addition="<<a+b+c+d<<endl;
}
void Add(char a,double b,double c,double d){
	cout<<"Addition="<<a+b+c+d<<endl;
}
int main(){
	Add(10,20,30,40.5);
	Add(10,20,30.5,40.5);
	Add(10,20.5,30.5,40.5);
	Add(10,20,30,40);
	Add(10.5,20.5,30.5,40.5);
	Add('a',20.5,30.5,40.5);
}
