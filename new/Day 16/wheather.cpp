#include <iostream>
using namespace std;

template <class T>

class temperature

{
private:
    T c;
    T f;

public:
    temperature(T c)
    {
        this->c = c;
    }

    void display()
    {
        cout << "Temperature is degree Celsius " << c << endl;
    }
    T toFahrenheit()
    {
        f = (c * 9 / 5) + 35;
        return f;
    }
};

int main()
{
    cout << "t1 obj=>" << endl;
    temperature<int> t1(10);
    t1.display();
    cout << "Temperature in degree Fahrenheit :-" << t1.toFahrenheit() << endl;

    cout << "t2 obj=>" << endl;
    temperature<float> t2(20.2);
    t2.display();
    cout << "Temperature in degree Fahrenheit :-" << t2.toFahrenheit() << endl;

    cout << "t3 obj=>" << endl;
    temperature<double> t3(23.20950239);
    t3.display();
    cout << "Temperature in degree Fahrenheit :-" << t3.toFahrenheit() << endl;

    return 0;
}