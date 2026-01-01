#include<iostream>
using namespace std;

void booking(int x[4][35]){
    int a ,b ;
    cout<<"Enter the seat number"<<endl;
    cin>>a>>b;
    if(x[a][b]==1){
        cout<<"The seat is already been booked";
    }else if (x[a][b]==0){
        x[a][b]=1;
    }else{
        cout<<"Enter a valid seat number";
    }

}
void display(int b[4][35]){
    cout<<"here 1 means occupied and 0 means its empty";
    for(int x =0; x<4;x++){
        cout<<" "<<endl;
        for (int y =0 ;y<35;y++){
            cout<<b[x][y]<<" ";
        }
    }
}
int main(){
    int arr[4][35];
    for(int i =0 ;i<4;i++){
        for(int j =0 ;j<35;j++){
            arr[i][j]=0;
        }
    }
    int z =0;

    while(z<10){
        int op;
        cout<<"Select the option below"<<endl<<"1.book a seat"<<endl<<"2.Display the occupied seats "<<endl;
        cin>>op;
        if(op==1){
            booking(arr);
        }else if(op==2){
            display(arr);
        }else{
            cout<<"enter a valid number";
        }
        z++;
    }
}