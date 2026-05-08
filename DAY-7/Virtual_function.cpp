// Polymorphism
// Virtual function


#include <iostream>
using namespace std;

class Player{
    public:
    virtual void show() { // Virtual function
        cout << "Player class show function" << endl;
    }
};

class cricketer : public Player{
    public:
    void show()
    { // Overriding the virtual function
        cout << "Cricketer class show function" << endl;
    }
   int a;
};

int main(){
    cricketer c1;
    c1.show(); // Calls Player's show function due to virtual function


    return 0;
}
