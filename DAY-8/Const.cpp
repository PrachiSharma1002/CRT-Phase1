#include<iostream>
using namespace std;

class Student {

private:
    int rollNo;

public:

    // Constructor
    Student(int r) {
        rollNo = r;
    }

    // Const member function
    void display() const {

        cout << "Roll Number: " << rollNo << endl;

        // rollNo++; ERROR
    }
};

// Const parameter
void show(const int x) {

    cout << "Value of x: " << x << endl;

    // x++;  ERROR
}

int main() {

    // Const variable
    const int a = 10;

    cout << "Const Variable a = " << a << endl;

    // a = 20;  ERROR

    show(a);

    // Const object
    const Student s1(101);

    s1.display();

    return 0;
}