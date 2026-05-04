#include<iostream>
using namespace std;
int main(){
    int a,b;
    char o;
    cout<<"enter values od a,b,o:";
    cin>>a>>b>>o;

    if (o == '+')
        cout << a + b;
    else if (o == '-')
        cout << a - b;
    else if (o == '*')
        cout << a * b;
    else if (o == '/')
        cout << a / b;
    else if (o == '%')
        cout << a % b;
    else
        cout << "wrong value of o";

    return 0;

}