#include <iostream>
using namespace std;

template <class T>

class price
{
private:
    T bp;
    T gst;
    T fp ; 

public:
    price()
    {
        bp = 0;
        gst = 18.5;
        fp = bp;
    }
    void setPrice(T bp)
    {
        this->bp = bp;
    }
    void AddGst(T gst)
    {
        this->gst = gst;
        fp = bp + (bp * gst / 100);
    }
    void ShowFinalPrice()
    {
        cout << "The final price is :" << fp << endl;
    }
};

int main()
{
    cout << "p1 obj=>" << endl;
    price<float> p1;
    p1.setPrice(24.0f);
    p1.AddGst(18.5f);
    p1.ShowFinalPrice();
    cout << "p2 obj=>" << endl;
    price<double> p2;
    p2.setPrice(549.48340332);
    p2.AddGst(18.52934);
    p2.ShowFinalPrice();
    return 0;
}