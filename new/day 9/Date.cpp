#include"date.h"
#include<iostream>

Date::Date(){
	day=03;
	month=10;
	year=2006;
}

Date::Date(int d,int m,int y){
	day=d;
	month=m;
	year=y;
}

void Date::initDate(){
	day=03;
	month=10;
	year=2006;
}

void Date::printDateonConsole(){
	cout<<"Date="<<day<<"/"<<month<<"/"<<year<<endl;
}

void Date::acceptDateonConsole(){
	cout<<"Enter day=";
	cin>>day;
	cout<<"Enter month=";
	cin>>month;
	cout<<"Enter year=";
	cin>>year;
}

void Date::isLeapyear(){
	cout<<"Enter year=";
	cin>>year;
	if(year % 4 == 0 && (year % 400 == 0 || year % 100 != 0))
		cout<<"Leap Year";
	else
		cout<<"Not a leap year";
}

void Date::setDay(int d){
	day=d;
}
void Date::setMonth(int m){
	month=m;
}
void Date::setYear(int y){
	year=y;
}

int Date::getDay(){
	return day;
}
int Date::getMonth(){
	return month;
}
int Date::getYear(){
	return year;
}

Date::~Date(){
	cout<<"Destroy the object"<<endl;
}
