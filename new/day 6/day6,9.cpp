
#include<iostream>
using namespace std;
int array[10]={1,2,3,4,5,6,7,8,9,10};
int sum = 0, i = 0;

int sumarray(int i){
    if (i < 9){
        sum += array[i];
        i++;
        sumarray(i);
    }
    else{
        return sum;
}
}
int main(){
	sumarray(i);
	cout << "sum is = " << sumarray(i);
}

