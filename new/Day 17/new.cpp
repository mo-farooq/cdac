#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//STL:-Standard Template Library
int main()
{
    //1. Containers
    //dynamic array
                 //0   1  2  3  4
    vector<int> v={11,40,25,10,25};
    cout<<"size of v="<<v.size()<<endl;
    cout<<"v 1st ele=>"<<v[0]<<endl;
    for(int i=0; i<v.size();i++)
    {
        cout<<" "<<v[i];
    }
    // 2. Algorithm:- rich or extra functionality van be performed on STL containers
   // reverse(v.begin(), v.end()); // reverse the container elements
    sort(v.begin(),v.end()); //sort the container elements
    int cnt= count(v.begin(),v.end(),25);  //count the occurrence of particular element in container
    cout<<endl<<"ele count in vector="<<cnt<<endl;
    //3.Iterator:- used to traverse through the containers
    cout<<endl<<"====Printing the vector using the iterator===="<<endl;
    vector<int>::iterator itr=v.begin();// placing the iterator on 1st elemet of container
    while(itr!=v.end())
    {
        cout<<" "<<*itr;//printing the element of vector
        itr++; 
    }
}