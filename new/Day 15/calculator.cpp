#include <iostream>
#include <string>
using namespace std;

class Calculator {
    double a,b;
public:
    void getInput(){
        cout<<"Enter two numbers:";
        cin>>a>>b;
    }
    void add(){
        if(a<=0||b<=0)
            throw string("Addition error: numbers must not be negative");
        cout<<"Addition="<<a+b<<endl;
    }
    void subtract(){
        if(a-b<0)
            throw string("Subtraction error: result must not be negative");
        cout<<"Substraction="<<a-b<<endl;
    }
    void multiply(){
        if (a<=0||b<=0)
            throw string("Multiplication error: values must be positive");
        cout << "Multiplication = " << a * b << endl;
    }
    void divide() {
        if (b == 0)
            throw string("Division error: denominator must not be zero");
        cout << "Division = " << a / b << endl;
    }
};

int main() {
    int choice;
    Calculator c;
    do {
        cout << "\nMenu:\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
        cout << "Enter your choice:";
        cin >> choice;
        if (choice == 5) break;
        c.getInput();
        try {
            switch(choice) {
                case 1: c.add(); break;
                case 2: c.subtract(); break;
                case 3: c.multiply(); break;
                case 4: c.divide(); break;
                default: throw string("Invalid menu choice");
            }
        }
        catch (string &err) {
            cout << "Exception: " << err << endl;
        }
    } while (true);
    cout << "Calculator exited." << endl;
    return 0;
}