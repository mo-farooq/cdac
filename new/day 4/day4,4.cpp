#include<iostream>
using namespace std;
struct empStruct{
	int empId;
	char empName[50];
	float empSalary;
};

int main(){
	

	struct empStruct emp;
	AcceptData(struct empStruct &emp);
	DisplayData(struct empStruct emp);
	
	return 0;
}
void AcceptData(struct empStruct *emp){
	cout<<"Enter Employee ID: ";    	
	cin>>emp->empId;
	cout<<"Enter Employee Name: ";
	cin>>emp->empName;
	cout<<"Enter Employee Salary: ";
	cin>>emp->empSalary;



}

void DisplayData(struct empStruct emp){
	cout<<"\nEmployee ID is :"<<emp.empId;
	cout<<"\nEmployee Name is :"<<emp.empName;
	cout<<"\nEmployee Salary is:"<<emp.empSalary<<endl;


}
