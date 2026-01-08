#include<iostream>
#include<map>
using namespace std;
//STL map
int main()
{   
// Q.Store the students roll number and mark, so that given roll number marks can be found quickly.
// • Key = roll of type int and value = marks of type double
    // map<key, value> m;
    map<int, double> m; 
    m[11]=98.23;
    m[21]=93.25;
    m[42]=99.43;
    m[10]=93.25; //value can be duplicate
    m[21]=95.66; //in map key should not be duplicate and if it is duplicated then 
    //it will conside the latest version of the duplicate entry here 93.25 will be
    //replaced with 95.66
    cout<<"Roll No"<<"=>"<<"Marks"<<endl;
    map<int , double>::iterator itr=m.begin();
    while(itr!=m.end())
    {    //   first, second
        //map<key ,  value>
        cout<<itr->first<<"=>"<<itr->second<<endl;
            // rollNo            //marks
            itr++;
    }

    m.erase(10); // the student having roll(key) 10 his / her entry will be deleted
    // from map
    cout<<endl<<"=====After erase ======"<<endl;
    itr=m.begin();
    while(itr!=m.end())
    {    //   first, second
        //map<key ,  value>
        cout<<itr->first<<"=>"<<itr->second<<endl;
            // rollNo            //marks
            itr++;
    }

}