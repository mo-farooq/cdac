
#include<iostream>
#include<string>
using namespace std;

class Rational{
    private:
    float numerator,denominator;
    public:
        Rational(){
            numerator=1;
            denominator=2;
        }
       
        void get(int n){
            string post="th";
                if(n==1){
                    post ="st";
                }else if(n==2){
                    post = "nd";
                }else{
                    post = "th";
                }
           
            cout<<"Enter the numerator of "<<n<<post<<" Rational number"<<endl;
            cin>>numerator;
            
            cout<<"Enter the Denominator of "<<n<<post<<" Rational number"<<endl;
            cin>>denominator;
            if(denominator==0){
                cout<<"Denominator can't be zero"<<endl;
                return;

            }
        
            
        }
        void preIncrement(){
            float num=numerator*1 + denominator*1;
            float den= denominator * 1;
            cout<<"preIncrement of the rational number is "<<endl<<num<<"/"<<den<<"= "<<num/den<<endl;
        }
        
        void preDecrement(){
            float num=numerator*1 - denominator*1;
            float den= denominator * 1;
            cout<<"preDecrement of the rational number is "<<endl<<num<<"/"<<den<<"= "<<num/den<<endl;
        }
        

};

int main(){
    Rational r1;
    r1.get(1);
    r1.preIncrement();
    r1.preDecrement();
 

    
    
    return 0;

}