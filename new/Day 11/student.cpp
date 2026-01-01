#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    double marks;

public:
    Student(string n, double m) {
        name = n;
        marks = m;
    }

    void compare_student(const Student& s2) {
        if (marks > s2.marks)
            cout << name << " has more marks than " << s2.name << endl;
        else if (marks < s2.marks)
            cout << s2.name << " has more marks than " << name << endl;
        else
            cout << "Both students have equal marks" << endl;
    }


    friend void compareStudent(const Student& s1, const Student& s2);
};

void compareStudent(const Student& s1, const Student& s2) {
    if (s1.marks > s2.marks)
        cout << s1.name << " has more marks than " << s2.name << endl;
    else if (s1.marks < s2.marks)
        cout << s2.name << " has more marks than " << s1.name << endl;
    else
        cout << "Both students have equal marks" << endl;
}

int main() {
    Student s1("aditya", 7.3);
    Student s2("Farooq", 7.8);

    compareStudent(s1, s2);

    s1.compare_student(s2);

    return 0;
}
