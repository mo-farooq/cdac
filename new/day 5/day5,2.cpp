#include<iostream>
using namespace std;

struct dateStruct{
	int day,month,year;

	void initDate(int d=12,int m=04,int y=2007){
		day = d;
		month = m;
		year = y;
	}

	void printDateOnConsole(struct Date *dt){
		cout<<"\nDate is :"<<dt->day<<"/"<<dt->month<<"/"<<dt->year<<endl;
	}

	void acceptDateFromConsole(struct Date *dt){

		cout<<"\nEnter Date in DD/MM/YYYY Format:";
		cin>>dt->day>>dt->month>>dt->year;

		if(!isValidDate()){
			cout<<"\n\nInvalid Date..";
			initDate();
		}
	}

	bool isLeapYear(struct dateStruct dt){
		if(dt.year % 4 == 0 && (dt.year % 400 == 0 || dt.year % 100 != 0))
			return 1;
		else
			return 0;
	}

};
int main(){
	struct dateStruct date;
	date.initDate();
	
	int ch=1,day=0,month=0,year=0;	
	
	while(ch != 0){

		cout<<"\n1.Initialize Date\n2.Print Date\n3.Accept Date\n4.Check For Leap year\n\nFor Exit Enter 0\n\n\tEnter Choice:";
		cin>>ch;

		switch(ch){
			case 0:
				break;
			case 1:
				cout<<"\n\nEnter Day:";
				cin>>day;
				cout<<"\n\nEnter Month:";
				cin>>month;
				cout<<"\n\nEnter Year:";
				cin>>year;
				
				date.initDate(day,month,year);
				cout<<"\nDate is Initialized..!!\n";
				break;
			case 2:
				printDateOnConsole(&date);
				break;
			case 3:
				acceptDateFromConsole(&date);
				break;
			case 4:
				cout<<"\n\nEnter Year:";
				cin>>date.year;
				cout<<"\n\t"<<date.year<<" is "; 
				isLeapYear(date)?"Leap Year..!!":"Not Leap Year..!!";
				break;
			default:
				cout<<"\nInvalid Input Try Again...!!!\n";
				break;	
		}
	}

	return 0;
}
