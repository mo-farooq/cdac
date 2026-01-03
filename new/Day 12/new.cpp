#include <iostream>
using namespace std;


class Employee {
private:
    int id;
    double salary;

public:
    Employee() : id(0), salary(0.0) {}
    Employee(int id, double salary) : id(id), salary(salary) {}

    void setId(int id) { this->id = id; }
    int getId() { return id; }

    void setSalary(double salary) { this->salary = salary; }
    double getSalary() { return salary; }

    virtual void accept() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    virtual void display() {
        cout << "ID: " << id << " | Salary: " << salary;
    }
};


class Manager : virtual public Employee {
private:
    double bonus;

public:
    Manager() : bonus(0.0) {}
    Manager(int id, double salary, double bonus) : Employee(id, salary), bonus(bonus) {}

    void setBonus(double bonus) { this->bonus = bonus; }
    double getBonus() { return bonus; }

    void acceptManager() {
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void displayManager() {
        cout << " | Bonus: " << bonus;
    }

    void accept() override {
        Employee::accept();
        acceptManager();
    }

    void display() override {
        Employee::display();
        displayManager();
    }
};

class Salesman : virtual public Employee {
private:
    double commission;

public:
    Salesman() : commission(0.0) {}
    Salesman(int id, double salary, double commission) : Employee(id, salary), commission(commission) {}

    void setCommission(double commission) { this->commission = commission; }
    double getCommission() { return commission; }

    void acceptSalesman() {
        cout << "Enter Commission: ";
        cin >> commission;
    }

    void displaySalesman() {
        cout << " | Commission: " << commission;
    }

    void accept() override {
        Employee::accept();
        acceptSalesman();
    }

    void display() override {
        Employee::display();
        displaySalesman();
    }
};


class SalesManager : public Manager, public Salesman {
public:
    SalesManager() {}
    SalesManager(int id, double salary, double bonus, double commission) 
        : Employee(id, salary),      
          Manager(id, salary, bonus),   
          Salesman(id, salary, commission) {}

    void accept() override {
        Employee::accept();
        acceptManager();    
        acceptSalesman();   
    }

    void display() override {
        Employee::display(); 
        displayManager();    
        displaySalesman();  
        cout << endl;
    }
};

int main() {
    cout << "--- Testing Manager ---" << endl;
    Manager m;
    m.accept();
    m.display();
    cout << "\n\n--- Testing Salesman ---" << endl;
    Salesman s;
    s.accept();
    s.display();
    cout << "\n\n--- Testing SalesManager ---" << endl;
    SalesManager sm;
    sm.accept();
    sm.display();

    return 0;
}