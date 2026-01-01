#include<iostream>
#include<iomanip>
using namespace std;

inline double cToF(double c){
	return (c*1.8)+32;
}

inline double fToC(double f){
	
	return ((f-32)*5/9);
}

inline int myMin(int a,int b){
	return a>b?b:a;
}

inline double simpleInterest(double p,double r,double t){
	return (p*(r/100)*t);
}

inline double amount(double p,double r,double t){
	return ((p*(r/100)*t)+p);
}

int main(){

	cout<<endl;

	cout<<left<<setw(45)<<setfill('-')<<"5 °C (Celsius) to  °F(Fahrenheit) is:"<<cToF(5)<<endl;
	cout<<left<<setw(45)<<setfill('-')<<"41 °F (Fahrenheit) to °C (Celsius) is: "<<fToC(41)<<endl;
	
	cout<<endl<<left<<setw(45)<<setfill('-')<<"Minimum of 22 and 41 is: "<<myMin(22,41)<<endl;

	cout<<endl<<left<<setw(45)<<setfill('-')<<"Simple Interest is: "<<simpleInterest(1000,10,2)<<endl;
	cout<<left<<setw(45)<<setfill('-')<<"Total Amount with Simple Interest is: "<<amount(1000,10,2)<<endl;

	cout<<endl;

	return 0;
}
