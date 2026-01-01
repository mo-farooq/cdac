#include <iostream>
#include<cctype>
using namespace std;
int main(){
	string pwd;
	cout<<"Enter Password=";
	cin>>pwd;
	bool upper=false,lower=false,special=false,digit=false;
	if(pwd.length()<8){
		cout<<"invalid password";
	}
	for(int i=0;i<pwd.length();i++){
		if(pwd[i]>='A' && pwd[i]<='Z'){
			upper=true;
		}
		else if(pwd[i]>='a' && pwd[i]<='b'){
			lower=true;
		}
		else if(pwd[i]>='1' && pwd[i]<='9'){
			digit=true;
		}
		else{
			special=true;
		}

	}
	if(upper&&lower&&special&&digit){
		cout<<"valid password"<<endl;
	}
	else{
		cout<<"invalid password"<<endl;
	}
}
