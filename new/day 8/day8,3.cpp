#include<iostream>
#include<string.h>
using namespace std;
class Employee{
	int empId;
	string empName;
	float empSal;
	mutable float bonus; 
	public:
		Employee(int empId,string empName,float empSal){
			this->empId=empId;
			this->empName=empName;
			this->empSal=empSal;
			this->bonus=0;
		}
		void displayOutput()const {
			cout<<"Id:"<<empId<<endl;
			cout<<"Name:"<<empName<<endl;
			cout<<"Salary:"<<empSal<<endl;
			cout<<"Bonus:"<<bonus<<endl;
		}
		int UpdateSalary()const{
			cout<<"Updated Salary:"<<empSal+bonus<<endl;
		}
		int calBonus()const {
			bonus=empSal*0.10;
			return (int)bonus;
		}	
};
int main(){
	const Employee emp(34,"SAHIL",90000);
	emp.calBonus();
	emp.displayOutput();
	emp.UpdateSalary();
	return 0;
}
