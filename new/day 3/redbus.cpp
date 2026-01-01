#include<iostream>
using namespace std;
void bookingSeat(int x[34][4]){
	int k,l;
	cout<<"Enter row and col of seat="<<endl;
	cin>>k>>l;
	if(x[k][l]==0){
		x[k][l]=1;
	}
	else if(x[k][l]==1){
		cout<<"Already booked";
		}
	else{
		cout<<"Enter valid number";	
	}

}

void display(int b[34][4]){
	int x,y;
	for(int x=0;x<34;x++){
		cout<<"    ";
		for(int y=0;y<4;y++){
			cout<<b[x][y]<<"";
			cout<<" ";
		}
	}

}
int main(){
	int arr[34][4];
	for(int i=0;i<34;i++){
		for(int j=0;j<4;j++){
			arr[i][j]=0;
		}
	}
	bookingSeat(arr);
	display(arr);
return 0;
}
