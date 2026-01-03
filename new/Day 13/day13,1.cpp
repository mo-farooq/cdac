#include<iostream>
using namespace std;
class Artist{
    private:
        string name;
        int rating;
        string country;
    public:
        Artist(){
            name="Aditya";
            rating=4;
            country="India";
        }

        void acceptArtistData(){
            cout<<"Enter Artist name:";
            cin>>name;
            cout<<"Enter Artist rating:";
            cin>>rating;
            cout<<"Enter Artist country:";
            cin>>country;
        }

        void printArtistData(){
            cout<<"Name:"<<name<<endl;
            cout<<"Rating:"<<rating<<endl;
            cout<<"Country:"<<country<<endl;
        }

        virtual void CalculateTotalIncome(){
            // return 0;
        }

        int getRating(){
            return rating;
        }

        bool isFamous(int getRating()){
            if(getRating()<=2 && getRating()>=1){
                return true;
            }
            else{
                return false;
            }
        }
        ~Artist(){
            cout<<"Inside the destructor of Artist class."<<endl;
        }
};

class Painter:public Artist{
    private:
        string type;
        float paintingRate;
        int noOfPainting;
    public:
        Painter(){
            type="commercial";
            paintingRate=5000;
            noOfPainting=25;
        }

        void acceptPainterData(){
            Artist::acceptArtistData();
            cout<<"Enter Painter type:";
            cin>>type;
            cout<<"Enter Painting rate:";
            cin>>paintingRate;
            cout<<"Enter no. of paintings:";
            cin>>noOfPainting;
        }

        void printPainterData(){
            Artist::printArtistData();
            cout<<"Type:"<<type<<endl;
            cout<<"Rate:"<<paintingRate<<endl;
            cout<<"no. of Painting:"<<noOfPainting<<endl;
        }
        
        void CalculateTotalIncome(){
            float totalIncome=paintingRate*noOfPainting;
            cout<<"Total Income="<<totalIncome<<endl;
        }

        ~Painter(){
            cout<<"Inside the destructor of Painter class."<<endl;
        }

};

int main(){
    // Artist a;
    // a.getRating();
    // a.isFamous(getRating());
    // if(isFamous()){
    //     cout<<"Not famous"<<endl;
    // }
    // else{
    //     cout<<"Famous"<<endl;
    // }
    Painter p;
    p.acceptPainterData();
    p.printPainterData();

    Painter *ptr=&p;
    ptr->CalculateTotalIncome();
}