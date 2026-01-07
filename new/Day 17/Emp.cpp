#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Employee class to store employee information
class Employee {
private:
    int empId;
    string empName;
    double empSalary;

public:
    // Function to accept employee details from user
    void inputEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
        cin.ignore(); // To clear the input buffer
        getline(cin, empName); // Using getline to allow spaces in name
        cout << "Enter Employee Salary: ";
        cin >> empSalary;
    }

    // Function to display employee information
    void showEmployeeDetails() const {
        cout << "Employee ID: " << empId
             << ", Employee Name: " << empName
             << ", Employee Salary: " << empSalary << endl;
    }

    // Getter function to return employee ID
    int getEmployeeId() const {
        return empId;
    }

    // Function to update employee salary
    void modifySalary(double newSal) {
        empSalary = newSal;
    }
};

int main() {
    vector<Employee> empList; // Vector to store employee objects
    int userChoice;

    // Menu-driven program for employee management
    do {
        cout << "\n=== EMPLOYEE MANAGEMENT SYSTEM ===" << endl;
        cout << "1. Add New Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Search Employee by ID" << endl;
        cout << "4. Update Employee Salary" << endl;
        cout << "5. Exit Program" << endl;
        cout << "Please enter your choice (1-5): ";
        cin >> userChoice;

        if (userChoice == 1) {
            Employee newEmployee;
            newEmployee.inputEmployeeDetails();
            empList.push_back(newEmployee);
            cout << "Employee added successfully!" << endl;
        }
        else if (userChoice == 2) {
            if (empList.empty()) {
                cout << "No employees to display." << endl;
            } else {
                cout << "\n--- All Employee Records ---" << endl;
                for (const auto &emp : empList) {
                    emp.showEmployeeDetails();
                }
            }
        }
        else if (userChoice == 3) {
            int searchId;
            cout << "Enter Employee ID to search: ";
            cin >> searchId;
            bool employeeFound = false;

            for (const auto &emp : empList) {
                if (emp.getEmployeeId() == searchId) {
                    cout << "Employee found: ";
                    emp.showEmployeeDetails();
                    employeeFound = true;
                    break;
                }
            }
            if (!employeeFound) {
                cout << "Employee with ID " << searchId << " not found." << endl;
            }
        }
        else if (userChoice == 4) {
            int updateId;
            double updatedSalary;
            cout << "Enter Employee ID to update salary: ";
            cin >> updateId;
            cout << "Enter new salary: ";
            cin >> updatedSalary;

            bool salaryUpdated = false;
            for (auto &emp : empList) {
                if (emp.getEmployeeId() == updateId) {
                    emp.modifySalary(updatedSalary);
                    salaryUpdated = true;
                    cout << "Salary updated successfully for Employee ID " << updateId << endl;
                    break;
                }
            }
            if (!salaryUpdated) {
                cout << "Employee with ID " << updateId << " not found." << endl;
            }
        }
        else if (userChoice != 5) {
            cout << "Invalid choice! Please enter a number between 1-5." << endl;
        }

    } while (userChoice != 5);

    cout << "Thank you for using Employee Management System!" << endl;
    return 0;
}