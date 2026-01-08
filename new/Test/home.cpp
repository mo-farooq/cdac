#include <iostream>
#include <string>
using namespace std;

// 3. VIRTUAL CLASS (The shared root)
class Device {
public:
    string brand = "Samsung";
    
    // 3. VIRTUAL FUNCTION (Allows for Polymorphism)
    virtual void powerOn() {
        cout << "Device is starting up..." << endl;
    }
};

// 1. VIRTUAL INHERITANCE (Solves the Diamond Problem)
class Camera : virtual public Device {
public:
    void takePhoto() { cout << "Capturing photo..." << endl; }
};

class Speaker : virtual public Device {
public:
    void playSound() { cout << "Playing audio..." << endl; }
};

// The Diamond Class
class VideoIntercom : public Camera, public Speaker {
public:
    void powerOn() override {
        cout << "Video Intercom: Camera and Speaker are ONLINE." << endl;
    }
};

int main() {
    // 6. DYNAMIC MEMORY ALLOCATION
    Device* dPtr = nullptr; 
    int choice;

    // 5. MENU DRIVEN
    while (true) {
        cout << "\n1. Buy Intercom (Upcasting)\n2. Test Features (Downcasting)\n3. Exit\nChoice: ";
        
        // 4. EXCEPTION HANDLING
        try {
            cin >> choice;
            if (choice < 1 || choice > 3) throw 505; // Throw an error code

            if (choice == 1) {
                // 2. UPCASTING (Child stored in Parent pointer)
                dPtr = new VideoIntercom(); 
                cout << "Intercom connected! (Upcasted to Device*)\n";
            } 
            else if (choice == 2) {
                if (dPtr == nullptr) throw "Please buy a device first!";

                // Virtual function call
                dPtr->powerOn(); 

                // 2. DOWNCASTING (Parent pointer back to Child)
                // We use dynamic_cast to safely turn Device* into VideoIntercom*
                VideoIntercom* v = dynamic_cast<VideoIntercom*>(dPtr);
                if (v) {
                    v->takePhoto();
                    v->playSound();
                }
            } 
            else {
                delete dPtr;
                break;
            }
        } 
        catch (int code) {
            cout << "Error: Invalid Choice " << code << endl;
        }
        catch (const char* msg) {
            cout << "Error: " << msg << endl;
        }
    }
    return 0;
}