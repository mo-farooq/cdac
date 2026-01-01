#include<iostream>
using namespace std;

int main() {
    float a ,b,result;
    char op;
    cout << "Enter the expression: " << endl;
    cin >> a >> op >> b;
    switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;   
            break;
        case '/':
            if(b != 0)
                result = a / b;
            else
                cout << "Error: Division by zero" << endl;
            break;
        default:
            cout << "Error: Invalid operator" << endl;
    }                   
    cout << a << " " << op << " " << b << " = " << result << endl;
    return 0;
}
