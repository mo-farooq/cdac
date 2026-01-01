#include"date.h"
#include<iostream>
int main(){
	Date d;
	d.initDate();
	d.acceptDateonConsole();
	d.printDateonConsole();
	d.isLeapyear();
	cout<<endl;
	Date d1;
	cout<<"Day="<<d1.getDay()<<endl;
	cout<<"month="<<d1.getMonth()<<endl;
	cout<<"Year="<<d1.getYear()<<endl;
	
	cout<<"=====DATE AFTER MODIFICATION====="<<endl;
	
	d1.setDay(03);
	d1.setMonth(8);
	d1.setYear(2006);
	cout<<"Date="<<d1.getDay()<<"/"<<d1.getMonth()<<"/"<<d1.getYear()<<endl;
}
