#include<iostream>
using namespace std;

class Time{
	private:
		int hour;
		int minute;
		int second;
	public:
		// parameter less constructor.
		//0 arguments
		Time(){
			hour=0;
			minute=0;
			second=0;
		}
		//1 arguments
		/*time(int h){
			hour=h;
			minute=0;
			second=0;
		}
		//2 argument
		time(int h,int m){
			hour=h;
			minute=m;
			second=0;
		}*/
		//3 arguments
		Time(int h,int m,int s){
			hour=h;
			minute=m;
			second=s;
		}
		
		//initialize time
		/*void init_time(){
			hour=0;
			minute=0;
			second=0;
		}*/
		//Accpet time
		void accept(){
			cout<<"Enter hour:";
			cin>>hour;
			cout<<"Enter minute:";
			cin>>minute;
			cout<<"Enter second:";
			cin>>second;
		}
		//display time
		void display(){
			cout<<"hour:"<<hour<<endl;
			cout<<"minute:"<<minute<<endl;
			cout<<"second:"<<second<<endl;
		}
		//mutator
		void setHour(int h){
			hour=h;
		}
		void setMinute(int m){
			minute=m;
		}
		void setSecond(int s){
			second=s;
		}
		//inspector
		int gethour(){
			return hour;
		}
		int getminute(){
			return minute;
		}
		int getsecond(){
			return second;
		}
		
		//destructor
		~Time(){
			cout<<"Inside the destructor of time class...!"<<endl;
		}

};
int main(){
	Time t1;
	t1.accept();
	t1.display();
	cout<<"hour="<<t1.gethour()<<endl; 
	cout<<"minute="<<t1.getminute()<<endl;
	cout<<"second="<<t1.getsecond()<<endl; 
	cout<<"=====time Info after modification====="<<endl;
	t1.setHour(10);  
	cout<<"hour="<<t1.gethour()<<endl;
	t1.setMinute(4);
	cout<<"minute="<<t1.getminute()<<endl;
	t1.setSecond(56); 
	cout<<"second="<<t1.getsecond()<<endl; 
}
