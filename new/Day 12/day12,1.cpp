#include<iostream>
using namespace std;

class Employee{
    protected:
        int id;
        double salary;
    public:
        Employee(){
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
        void accept(){
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
    protected:
        double bonus;
    public:
        Manager(){
            int id = 12;
            double salary=20000;
            double bonus = 2000;
            

        }
        Manager(int i ,double s ,  double b){
            Employee::id=i;
            Employee::salary=s;
            bonus=b;
        }
        void setBonus(double b){
            bonus=b;
        }
        int getBonus(){
            return bonus;
        }
        void accept(){
            Employee::accept();

        }
        void acceptManager(){
            cout<<"Enter bonus:";
            cin>>bonus;

        }
};

class Salesman:virtual public Employee{
    protected:
        double commission;
    public:
        Salesman(){
            commission=1000.50;
        }
        Salesman(double c){
            commission=c;
        }
        void setCommission(double d){
            commission=d;
        }
        void accept(){
            Employee::accept();
        }
        void acceptSalesman(){

        }
};
class SalesManager : public Manager, public Salesman{
public:
    

    
};
int main(){
    Employee e1;
    Salesman s1;
    int n = s1.getId();
    

    
   
    cout<<n;
}