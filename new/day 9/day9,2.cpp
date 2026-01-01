#include<iostream>
using namespace std;

class Date{
	private:
		int day;
		int month;
		int year;
	public:
		Date(){
			day=03;
			month=8;
			year=2006;
		}
		
		void print(){
			cout<<"Date="<<day<<"/"<<month<<"/"<<year<<endl;
		}
		
		void setDay(int d){
			day=d;
		}
		void setMonth(int m){
			month=m;
		}
		void setYear(int y){
			year=y;
		}
		
		int getDay(){
			return day;
		}
		int getMonth(){
			return month;
		}
		int getYear(){
			return year;
		}
		~Date(){
			cout<<"Destroy the Date"<<endl;
		}
};

class Employee{
	private:
		int emp_id;
		string dept;
		Date joiningDate;
		
	public:
		Employee(){
			emp_id=03;
			dept="CS";
		}
		
		void Display(){
			cout<<"Employee id:"<<emp_id<<endl;
			cout<<"Employee department:"<<dept<<endl;
			joiningDate.print();
		}
		
		~Employee(){
			cout<<"Destroy Employee class"<<endl;
		}
};

class Student{
	private:
		int rollNo;
		float marks;
		string course;
		Date joiningDate;
		Date endDate;
	public:
		Student(){
			rollNo=03;
			marks=60.00;
			course="AI-DS";
		}
		
		void display(){
			cout<<"RollNo:"<<rollNo<<endl;
			cout<<"Marks:"<<marks<<endl;
			cout<<"Course:"<<course<<endl;
			joiningDate.print();
			endDate.print();
		}
		
		~Student(){
			cout<<"Destroy Student class"<<endl;
		}
};

int main(){
	Date d;
	d.print();
	d.setDay(29);
	d.setMonth(12);
	d.setYear(2025);
	cout<<"Date="<<d.getDay()<<"/"<<d.getMonth()<<"/"<<d.getYear()<<endl;
	Employee e;
	e.Display();
	Student s;
	s.display();
}
