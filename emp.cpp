#include<iostream>
using namespace std;

struct employee{
    int empID;
    char empName[50];
    float empSalary;
};

void acceptData(struct employee *emp){
    cout<<"Enter Employee Id: ";
    cin>>emp->empID;
    cout<<"Enter Employee Name:- ";
    cin>>emp->empName;
    cout<<"Enter Employee Salary:- ";
    cin>>emp->empSalary;


}

void printEmpData(struct employee emp){
    cout<<"Employee ID is : "<<emp.empID<<endl;
    cout<<"Employee Name is : "<<emp.empName<<endl;
    cout<<"Employee Salary is : "<<emp.empSalary<<endl;
}
int main(){
    struct employee emp;
    acceptData(&emp);
    printEmpData(emp);
    
}