#include<iostream>
using namespace std;

class Date{
	private:
		int day,month,year;
	public:
		Date();
		Date(int d,int m,int y);
		void initDate();
		void printDateonConsole();
		void acceptDateonConsole();
		void isLeapyear();
		void setDay(int d);
		void setMonth(int m);
		void setYear(int y);	
		int getDay();
		int getMonth();
		int getYear();
		~Date();
};
