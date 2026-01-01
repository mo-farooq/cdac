#include<iostream>
using namespace std;
void dynamicArray(){
	int n;
	
	cout<<"Enter Size of array:";
	cin>>n;
	double* arr=new double[n];
	cout<<"Enter Elements:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Elements are:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	delete[] arr;
}
int main(){
	dynamicArray();
}

