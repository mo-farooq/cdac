#include<iostream>
using namespace std;

class Cylinder{
	private:
		int radius;
		int height;
		static const double pi;
	public:
		Cylinder(){
			radius=15;
			height=30;
		}
		//initilizer list
		Cylinder(double r , double  h):radius(r), height(h){
		}
		
		int getRadius(){
			return radius;
		}
		
		int getHeight(){
			return height;
		}
		
		void setRadius(int r)
    		{
     		   radius = r;
    		}
    		
    		void setHeight(int h)
    		{
     		   height = h;
    		}
    		
    		int calculateVolume(){
    			return pi*radius*radius*height;
    		}
};
const double Cylinder::pi = 3.14;
int main(){
	Cylinder c1(3.5, 10.0);
	cout << "Radius: " << c1.getRadius() << endl;
	cout << "Height: " << c1.getHeight() << endl;
	cout << "Volume of Cylinder: " << c1.calculateVolume() << endl;

}
