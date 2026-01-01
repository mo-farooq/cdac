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
        void add(const Rational& r){
            float num=numerator*r.denominator + denominator*r.numerator;
            float den= denominator * r.denominator;
            cout<<"The addition of two rational numbers are"<<endl<<num<<"/"<<den<<"= "<<num/den<<endl;
        }
        void mul(const Rational& r){
            float num=numerator*r.numerator;
            float den= denominator * r.denominator;
            cout<<"The multiplication of two rational numbers are"<<endl<<num<<"/"<<den<<"= "<<num/den<<endl;
        }
        void sub(const Rational& r){
            float num=numerator*r.denominator - denominator*r.numerator;
            float den= denominator * r.denominator;
            cout<<"The substraction of two rational numbers are"<<endl<<num<<"/"<<den<<"= "<<num/den<<endl;
        }
        

};

int main(){
    Rational r1;
    Rational r2;

    r1.get(1);
    r2.get(2);
    r1.add(r2);
    r1.mul(r2);
    r1.sub(r2);
    
    return 0;

}