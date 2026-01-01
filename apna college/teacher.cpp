#include<iostream>
#include<string>
using namespace std; 

class teacher{
    private:
    float salary; 
    public:
    string name;
    string dept;
    string subject;
    

    //parameterised
    teacher(string name,string dept, string subject, float salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
        
        cout<<"constructer"<<endl;

    }
    // //non parameterised
    // teacher(){
    //     dept="computer Science";
    //     cout<<"constructer";
    // }
    //copy constructer 
    teacher(teacher &origObj){
        cout<<"I am copy constructer"<<endl;
        this->name = origObj.name;
        this->dept= origObj.dept; 
        this->subject= origObj.subject;
        this->salary= origObj.salary;
        

    }
 
    void changedept(string newdept){
        dept=newdept;
    }
    void getinfo(){
        cout<<"name:-"<<name<<endl;
        cout<<"dept:-"<<dept<<endl;
        cout<<"subject:-"<<subject<<endl;
        cout<<"salary:-"<<salary<<endl;

    }

};

int main(){
    teacher ti("Farooq","computerScience","cpp",25000);
    ti.dept= "maths"; 
    // cout<<ti.dept<<endl;
    ti.name = "farooq";
    ti.changedept("science");
    cout<<ti.dept<<endl;  
    // cout<<ti.name;
    ti.getinfo();
    teacher t2(ti);
    t2.getinfo();
    return 0;
}