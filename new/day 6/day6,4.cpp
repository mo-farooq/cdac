#include<iostream>
using namespace std;
void rotate_arr(int arr,int n,int k){
	
	for(int j=k;j<=0;j--){
		cout<<arr[n];
	}

}
int main(){
	int arr[],n,k;
	cout<<"Enter the no. of elements"<<n;
	for(int i=0;i<n;i++){
		cout<<"Enter element no."<<i+1<<"=";
		cin<<arr[i];
	}
	cout<<"Enter position for rotate="<<k;
	rotate_arr(arr,n,k);
}
