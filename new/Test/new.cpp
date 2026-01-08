#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 1. Virtual Base Class to solve the Diamond Problem
class Person {
protected:
    string name;
public:
    Person(string n) {
        name = n ;
    }
    
    // 3. Virtual Function for Polymorphism
    virtual void display() {
        cout << "Name: " << name << " (Role: Person)" << endl;
    }
    virtual ~Person() {} // Virtual destructor for clean memory cleanup
};

class Student : virtual public Person {
protected:
    int studentID;
public:
    Student(string n, int id) : Person(n), studentID(id) {}
    void display() override {
        cout << "Name: " << name << " | Student ID: " << studentID << endl;
    }
};

class Employee : virtual public Person {
protected:
    double salary;
public:
    Employee(string n, double s) : Person(n), salary(s) {}
    void display() override {
        cout << "Name: " << name << " | Salary: $" << salary << endl;
    }
};

// The Diamond!
class TA : public Student, public Employee {
public:
    TA(string n, int id, double s) : Person(n), Student(n, id), Employee(n, s) {}
    void display() override {
        cout << "[TA] Name: " << name << " | ID: " << studentID << " | Stipend: $" << salary << endl;
    }
    void uniqueTAMessage() {
        cout << "Accessing specific TA logic..." << endl;
    }
};

int main() {
    // 6. Dynamic Memory Allocation
    Person* ptr = nullptr; 
    int choice;

    while (true) {
        cout << "\n--- University Menu ---\n";
        cout << "1. Create TA (Polymorphism/Upcasting)\n";
        cout << "2. Show Details & Downcast Check\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";

        // 4. Exception Handling
        try {
            if (!(cin >> choice)) {
                throw "Invalid Input! Please enter a number.";
            }

            if (choice == 1) {
                // 2. Upcasting: TA pointer stored in Person pointer
                ptr = new TA("Rahul", 101, 1500.0);
                cout << "TA Object created dynamically and upcasted to Person*." << endl;
            } 
            else if (choice == 2) {
                if (ptr == nullptr) throw string("No object found! Create one first.");

                // Polymorphism in action
                ptr->display();

                // 2. Downcasting: Converting Person* back to TA* safely
                TA* taPtr = dynamic_cast<TA*>(ptr);
                if (taPtr) {
                    cout << "Downcast successful! ";
                    taPtr->uniqueTAMessage();
                }
            } 
            else if (choice == 3) {
                delete ptr; // Clean up
                break;
            } 
            else {
                throw 404; // Custom error code for wrong choice
            }
        } 
        catch (const char* msg) { cout << "Error: " << msg << endl; cin.clear(); cin.ignore(100, '\n'); }
        catch (string msg) { cout << "Error: " << msg << endl; }
        catch (...) { cout << "Unknown error occurred." << endl; }
    }

    return 0;
}