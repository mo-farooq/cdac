#include<iostream>
using namespace std;

class Date{
	private:
		int day,month,year;
	public:
		//parameterless
		Date(){
			day=03;
			month=10;
			year=2006;
		}
		//parameterized
		Date(int d,int m,int y){
			day=d;
			month=m;
			year=y;
		}
		
		//initdate
		void initDate(){
			day=03;
			month=10;
			year=2006;
		}
		//display
		void display(){
			cout<<day<<"/"<<month<<"/"<<year<<endl;
		}
		//accept
		void accept(){
			cout<<"Enter day:";
			cin>>day;
			cout<<"Enter month:";
			cin>>month;
			cout<<"Enter year:";
			cin>>year;
		}
		//leap yaer
		bool isLeapyear(int year){
			if(year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)){
			cout<<"year is leap yaer"<<endl;
			}
		else{
			cout<<"year is not leap yaer"<<endl;
			}
		}
		
		//mutators
		void setDay(int d){
			day=d;
		}
		void setMonth(int m){
			month=m;
		}
		void setyear(int y){
			year=y;
		}
		//inspector
		int getday(){
			return day;
		}
		int getmonth(){
			return month;
		}
		int getyear(){
			return year;
		}
		
		~Date(){
			cout<<"Inside the destructor of Date class...!"<<endl;
		}
};

int main(){
	Date d;
	int ch,year;
	while(ch != 0){

		cout<<"\n1.Initialize Date"<<endl<<"2.Print Date"<<endl<<"3.Accept Date"<<endl<<"4.Check For Leap year"<<endl<<"For Exit Enter 0"<<endl<<"Enter Choice:";
		cin>>ch;

		switch(ch){
			case 0:
				break;
			case 1:

				d.initDate();
				break;
			case 2:
				d.display();
				break;
			case 3:
				d.accept();
				break;
			case 4:
				cout<<"\n\nEnter Year:";
				cin>>year;
				cout<<"\n\t"<<year<<" is "; 
				d.isLeapyear(year);
				break;
			default:
				cout<<"\nInvalid Input Try Again...!!!\n";
				break;	
		}
	}
	

}
