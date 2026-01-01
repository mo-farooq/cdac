#include<iostream>
using namespace std;

class Student{
	private:
		int rollno;
		string name;
		float marks;
		const float maxMarks;
	public:
		Student(int r,string n,float m):maxMarks(100){
			rollno=r;
			name=n;
			marks=m;
		}
		
		void displayOutput()const{
			cout<<"rollno.:"<<rollno<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"marks:"<<marks<<endl;
			cout<<"Grade:"<<calGrade()<<endl;		
			}
		
		char calGrade()const{
			if(marks>=90){
				return 'A';
			}
			else if(marks<90 && marks>=80){
				return 'B';
			}
			else if(marks<80 && marks>=70){
				return 'C';
			}
			else{
				return 'D';
			}
		}
		
		
};

int main(){
	const Student s(57,"SAHIL",80);
	
	s.displayOutput();
}
