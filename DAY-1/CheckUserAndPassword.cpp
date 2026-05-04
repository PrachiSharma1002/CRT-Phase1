#include<iostream>
using namespace std;

int main() {
    string User = "prachi";
    string Password = "1002";

    string u, p;

    cout << "Enter Username: ";
    cin >> u;

    cout << "Enter Password: ";
    cin >> p;

    if (User == u && Password == p)
        cout << "Valid user and password";
    else
        cout << "Invalid user or password";

    return 0;
}