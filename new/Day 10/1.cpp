#include<iostream>
using namespace std;



class Array{
     private:
        int n;
        double *arr;
     public:
        
        
        void getSize(int n){
            this->n=n;
            arr = new double[n];

        }
        void AcceptRecord(){
            for(int i =0;i<n;i++){
                cout<<"Enter the record"<<" "<<i+1<<endl;
                cin>>arr[i];

            }
        }
        void printRecord(){
            for(int i =0 ;i<n;i++){
                cout<<arr[i]<<endl;
            }
        }
        void LinearSearch(double x){
            for(int i =0;i<n;i++){
                if(x==arr[i]){
                    cout<<i;
                    break;
                }
                cout<<"not found"<<endl;
            }

        }
        // ~Array(){
        // cout<<"done"<<endl;}


};

int main(){
    int size;
    double x;
    Array a;
   
    cout<<"Enter the Size of the Array"<<endl;
    cin>>size;
    a.getSize(size);
    a.AcceptRecord();
    a.printRecord();
    cout<<"Enter the record to search"<<endl;
    cin>>x;

    a.LinearSearch(x);
    return 0;




}
