#include <iostream>
using namespace std;

class shape
{
public:
    virtual void accept() = 0;
    virtual void Area() = 0;
    // virtual void Display()=0;
};
class circle : public shape
{
private:
    int radius;

public:
    void accept() override
    {
        cout << "Enter the value for radius" << endl;
        cin >> radius;
    }
    void Area() override
    {
        cout << "Area =" << 3.14 * radius * radius << endl;
    }
};
class rectangle : public shape
{
private:
    int length, breadth;

public:
    void accept() override
    {
        cout << "Enter the values of lenght and breadth" << endl;
        cin >> length >> breadth;
    }
    void Area() override
    {
        cout << "Area:-" << length * breadth << endl;
    }
};
int main()
{
    shape *s1;
    shape *s2;
    circle c1;
    rectangle r1;
    s1 = &c1;
    s2 = &r1;
    int choice = 0 ;

        do{
            cout<<"1.Area of circle"<<endl;
            cout<<"2.Area of Rectangle"<<endl;

            cin>>choice;

           switch (choice)
           {
           case 1:
            s1->accept();
            s1->Area();
            break;
            case 2:
            s2->accept();
            s2->Area();
           
           default:
            break;
           } 

        }while(choice!=0);
    return 0;
}