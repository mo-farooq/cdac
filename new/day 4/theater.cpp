#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

int main(){
	string MovieName;
	int priceAT,priceCT,noATS,noCTS,DonPER;
	cout<<"Enter Movie Name=";
	cin>>MovieName;
	cout<<"price of audlt ticket=";
	cin>>priceAT;	
	cout<<"price of child ticket=";
	cin>>priceCT;
	cout<<"no of audlt ticket sold=";
	cin>>noATS;
	cout<<"no of child ticket sold=";
	cin>>noCTS;
	cout<<"percentage of donate=";
	cin>>DonPER;

	int noofTic;
	noofTic=noATS+noCTS;

	int netA,netC,gressAmt;
	netA=priceAT*noATS;
	netC=priceCT*noCTS;
	gressAmt=netA+netC;
	
	int amtofDon;
	amtofDon=(gressAmt/100)*DonPER;
	
	int netSale;
	netSale=gressAmt-amtofDon;

	int lenOfChars = 35;

	for(int i =0;i<25;i++){
		cout<<"-*";}

	cout<<endl<<left << setw(lenOfChars)<< setfill('.') <<"Movie Name: ";
	cout<<" "<<MovieName;
	cout<<endl<<left<<setw(lenOfChars)<<setfill('.')<<"Number of Tickets Sold: ";
	cout<<right<<setw(10)<<setfill(' ')<<noofTic;
	cout<<endl<<left<<setw(lenOfChars)<<setfill('.')<<"Gross Amount: ";
	cout<<" $"<<right<<setw(8)<<setfill(' ')<<fixed<<setprecision(2)<<gressAmt;
	cout<<endl<<left<<setw(lenOfChars)<<setfill('.')<<"Percentage of Gross Amount Donated: ";
	cout<<right<<setw(9)<<setfill(' ')<<fixed<<setprecision(2)<<DonPER<<"%";
	cout<<endl<<left<<setw(lenOfChars)<<setfill('.')<<"Amount Donated: ";
	cout<<" $"<<right<<setw(8)<<setfill(' ')<<fixed<<setprecision(2)<<amtofDon;
	cout<<endl<<left<<setw(lenOfChars)<<setfill('.')<<"Net Sale: ";
	cout<<" $"<<right<<setw(8)<<setfill(' ')<<fixed<<setprecision(2)<<netSale<<endl;	 
	cout<<endl;

}
