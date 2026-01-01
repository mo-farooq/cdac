#include<iostream>
using namespace std;
class Complex{
    private:
    int real , img;
    public:
    Complex(){
        real=5;
        img=6;
    }
    void getter(){
        cout<<"enter the value of real number"<<endl;
        cin>>real;
        cout<<"enter the value of imaginary number"<<endl;
        cin>>img;
    }
    void Display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }


};
int main(){
    Complex c1;
    Complex c2(c1);
    c2.getter();
    c2.Display();


}