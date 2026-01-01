#include<iostream>
using namespace std;

class Chair{
	private:
		int height;
		int width;
		static double price;
		string color;
	
	public:
		//parameterless constructor
		Chair(){
			height=10;
			width=7;
			color="Blue";
		}
		//parameterized constructor
		Chair(int h,int w,string c){
			height=h;
			width=w;
			color=c;
		}
		
		void inputData(){
			cout<<"Enter chair height:";
			cin>>height;
			cout<<"Enter chair width:";
			cin>>width;
			cout<<"Enter chair color:";
			cin>>color;
		}
		
		void display(){
			cout<<"Height:"<<height<<endl;
			cout<<"Width:"<<width<<endl;
			cout<<"Price:"<<price<<endl;
			cout<<"color:"<<color<<endl;
		}
		
		static void SetPrice(double p)
		{
        		price = p;
		}

		// Destructor
		~Chair()
    		{
       	 		// Destructor (no dynamic memory used)
        		cout << "Chair object destroyed" << endl;
    		}

};
double Chair::price = 0.0;
int main(){
	Chair::SetPrice(2500.50);
	Chair c1;
	c1.inputData();
	c1.display();
	cout << endl;
	Chair c2(40, 10, "Red");
	c2.display();
    return 0;
}
