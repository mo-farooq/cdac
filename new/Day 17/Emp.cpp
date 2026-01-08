#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    double salary;

public:
    void accept(int inputId) {
        id = inputId;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() const {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Salary: " << salary << endl;
    }

    int getId() const {
        return id;
    }

    void updateSalary(double sal) {
        salary = sal;
    }
};

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\n--- Employee Menu ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Update Employee Salary using ID\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int newId;
            cout << "Enter ID: ";
            cin >> newId;

            bool exists = false;
            for (int i = 0; i < employees.size(); i++) {
                if (employees[i].getId() == newId) {
                    exists = true;
                    break;
                }
            }

            if (exists) {
                cout << "Error: Employee with this ID already exists!\n";
            } else {
                Employee e;
                e.accept(newId);
                employees.push_back(e);
            }
        }
        else if (choice == 2) {
            for (int i = 0; i < employees.size(); i++) {
                employees[i].display();
            }
        }
        else if (choice == 3) {
            int sid;
            cout << "Enter ID to search: ";
            cin >> sid;
            bool found = false;

            for (int i = 0; i < employees.size(); i++) {
                if (employees[i].getId() == sid) {
                    employees[i].display();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Employee not found.\n";
        }
        else if (choice == 4) {
            int uid;
            double newSalary;
            cout << "Enter ID: ";
            cin >> uid;

            bool updated = false;
            for (int i = 0; i < employees.size(); i++) {
                if (employees[i].getId() == uid) {
                    cout << "Enter new salary: ";
                    cin >> newSalary;
                    employees[i].updateSalary(newSalary);
                    updated = true;
                    cout << "Salary updated successfully.\n";
                    break;
                }
            }
            if (!updated) cout << "Employee not found.\n";
        }

    } while (choice != 5);

    return 0;
}
