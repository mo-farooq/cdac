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

    void acceptSize() {
        cout << "Enter size of Array: ";
        cin >> n;

        delete[] arr;          
        arr = new double[n];   
    }

    void sizeAcceptRecord() {
        for (int i = 0; i < n; i++) {
            cout << "Enter Elemnets " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    void PrintRecord() {
        cout << "Elements are: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    ~Array() {
        delete[] arr;
        cout << "Destroyed the Array class" << endl;
    }
};

int main() {
    Array a;
    a.acceptSize();
    a.sizeAcceptRecord();
    a.PrintRecord();
    return 0;
}
