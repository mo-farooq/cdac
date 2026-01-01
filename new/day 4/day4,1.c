#include<stdio.h>
struct empStruct{
	int empId;
	char empName[50];
	float empSalary;
};
// accept data from user
void acceptData(struct empStruct *emp){
	printf("Enter Employee ID: ");
	scanf("%d",&emp->empId);
	printf("Enter Employee Name: ");
	scanf("%s",emp->empName);
	printf("Enter Employee Salary: ");
	scanf("%f",&emp->empSalary);
}
// display data of employee
void displayData(struct empStruct *emp){
	printf("\nEmployee ID is : %d\n",emp->empId);
	printf("Employee Name is : %s\n",emp->empName);
	printf("Employee Salary is: %f\n\n",emp->empSalary);
}
int main(){
	struct empStruct emp;
	
	acceptData(&emp);
	displayData(&emp);

	return 0;
}
