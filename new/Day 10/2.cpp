#include<iostream>
using namespace std;

class Array {
private:
    int n;
    double *arr;

public:
    Array() {
        n = 5;
        arr = new double[n];
    }

    Array(const Array &obj) {
        n = obj.n;
        arr = new double[n];
        for (int i = 0; i < n; i++) {
            arr[i] = obj.arr[i];
        }
        cout << "Copy constructor called" << endl;
    }

    void acceptSize() {
        cout << "Enter size of record: ";
        cin >> n;

        delete[] arr;
        arr = new double[n];
    }

    void sizeAcceptRecord() {
        for (int i = 0; i < n; i++) {
            cout << "Enter record " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    void PrintRecord() {
        cout << "Records are: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void LinearSearch() {
        double key;
        cout << "Enter the record to search: ";
        cin >> key;

        for (int i = 0; i < n; i++) {
            if (key == arr[i]) {
                cout << "Record found at position: " << i + 1 << endl;
                return;
            }
        }
        cout << "Record not found" << endl;
    }

    ~Array() {
        delete[] arr;
        cout << "Destroyed the Array class" << endl;
    }
};

int main() {
    Array a1;
    a1.acceptSize();
    a1.sizeAcceptRecord();

    Array a2 = a1;   

    a1.PrintRecord();
    a2.PrintRecord();

    return 0;
}
