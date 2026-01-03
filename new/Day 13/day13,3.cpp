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

class Singer:public Artist{
    private:
        float Rate_per_song;
        int no_of_album;
    public:
        Singer(){
            Rate_per_song=5000;
            no_of_album=25;
        }

        void acceptPainterData(){
            Artist::acceptArtistData();
            cout<<"Enter Song rate:";
            cin>>Rate_per_song;
            cout<<"Enter no. of album:";
            cin>>no_of_album;
        }

        void printPainterData(){
            Artist::printArtistData();
            cout<<"Rate per song:"<<Rate_per_song<<endl;
            cout<<"no. of Album:"<<no_of_album<<endl;
        }
        
        void CalculateTotalIncome(){
            float totalIncome=Rate_per_song*no_of_album;
            cout<<"Total Income="<<totalIncome<<endl;
        }

        ~Singer(){
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
    Singer s;
    s.acceptPainterData();
    cout<<endl;
    cout<<endl;
    cout<<"=========PRINTING DATA========="<<endl;
    s.printPainterData();

    Singer *ptr=&s;
    ptr->CalculateTotalIncome();
}