#include<iostream>
using namespace std;

class cricketer{
public:
    string name;
    int run;
    double avg;

    // Default constructor
    cricketer() {
        name = "Unknown";
        run = 0;
        avg = 0.0;
    }

    // Parameterized constructor
    cricketer(string n, int r){
        name = n;
        run = r;
        avg = 0.0;
    }

    // Parameterized constructor (3 args)
    cricketer(string n, int r, double avg){
        name = n;
        run = r;
        this->avg = avg;
    }

    // Copy constructor
    cricketer(const cricketer &c){
        name = c.name;
        run = c.run;
        avg = c.avg;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Run: "<<run<<endl;
        cout<<"Avg: "<<avg<<endl;
    }
};

int main(){
    cricketer c1;                        // default
    cricketer c2("Deepak", 21, 45.5);    // parameterized
    cricketer c3 = c2;                   // copy constructor

    cout << "C1:\n";
    c1.display();

    cout << "\nC2:\n";
    c2.display();

    cout << "\nC3 (Copy of C2):\n";
    c3.display();

    return 0;  
}