#include<iostream>
using namespace std;

class Employee{
protected:
    int id;
    double salary;

public:
    Employee(){
        id = 3;
        salary = 200000;
    }

    Employee(int i, double s){
        id = i;
        salary = s;
    }

    void setId(int i){
        id = i;
    }

    int getId(){
        return id;
    }

    void setSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }

    void Accept(){
        cout << "Enter Employee Id: ";
        cin >> id;
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void Display(){
        cout << "Id: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : virtual public Employee{
protected:
    double bonus;

public:
    Manager(){
        bonus = 2000;
    }

    Manager(double b){
        bonus = b;
    }

    // void setBonus(double b){
    //     bonus = b;
    // }

    // double getBonus(){
    //     return bonus;
    // }

    void acceptManager(){
        Employee::Accept();
        cout << "Enter bonus: ";
        cin >> bonus;
    }

    void displayManager(){
        Employee::Display();
        cout << "Bonus: " << bonus << endl;
    }
};

class Salesman : virtual public Employee{
protected:
    double commission;

public:
    Salesman(){
        commission = 1000.50;
    }

    Salesman(double c){
        commission = c;
    }

    // void setCommission(double c){
    //     commission = c;
    // }

    // double getCommission(){
    //     return commission;
    // }

    void acceptSalesman(){
        Employee::Accept();
        cout << "Enter commission: ";
        cin >> commission;
    }

    void displaySalesman(){
        Employee::Display();
        cout << "Commission: " << commission << endl;
    }
};

class Salesmanager : public Manager, public Salesman{
public:
    Salesmanager(){
        id = 3;
        salary = 20000.50;
        bonus = 2000.50;
        commission = 1000.50;
    }

    Salesmanager(int i, double s, double b, double c){
        id = i;
        salary = s;
        bonus = b;
        commission = c;
    }

    void Accept(){
        Employee::Accept();
        cout << "Enter Manager bonus: ";
        cin >> bonus;
        cout << "Enter Salesman commission: ";
        cin >> commission;
    }

    void Display(){
        Employee::Display();
        cout << "Bonus: " << bonus << endl;
        cout << "Commission: " << commission << endl;
    }
};

int main(){
    //employee
    Employee e1(30, 250000);
    e1.Accept();
    e1.Display();
    e1.setId(10);
    e1.setSalary(300000);
    cout << "Id: " << e1.getId() << endl;
    cout << "Salary: " << e1.getSalary() << endl;

    //manager
    Manager m;
    m.acceptManager();
    m.displayManager();

    //Salesman
    Salesman s;
    s.acceptSalesman();
    s.displaySalesman();

    //SalesManager
    Salesmanager sm;
    sm.Accept();
    sm.Display();
    return 0;
}
