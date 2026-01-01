#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        double salary;
    public:
        Employee(){
            id=03;
            salary=200000;
        }
        Employee(int i,double s){
            id=i;
            salary=s;
        }
        void setId(int i){
            id=i;
        }
        int getId(){
            return id;
        }
        void setSalary(double s){
            salary=s;
        }
        int getSalary(){
            return salary;
        }
        void Accpet(){
            cout<<"Enter Employee Id:";
            cin>>id;
            cout<<"Enter Employee Salary:";
            cin>>salary;
        }
        void Display(){
            cout<<"Id:"<<id<<endl;
            cout<<"Salary:"<<salary<<endl;
        }
};

class Manager : virtual public Employee{
    private:
        double bonus;
    public:
        Manager(){
            bonus=2000;
        }
        Manager(double b){
            bonus=b;
        }
        void setBonus(double b){
            bonus=b;
        }
        int getBonus(){
            return bonus;
        }
        void accept(){

        }
};

class Salesman:virtual public Employee{
    private:
        double commission;
    public:
        Salesman(){
            commission=1000.50;
        }
        Salesman(double c){
            commission=c;
        }
        void setCommission(double d){
            
        }
};
int main(){

}