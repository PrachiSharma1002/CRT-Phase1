#include<iostream>
using namespace std;

int main(){
    int a;

    cout<<"1 : Support"<<endl;
    cout<<"2 : Billing"<<endl;
    cout<<"3 : Technical Issue"<<endl;
    cout<<"4/0 : Speak to the agent"<<endl;
    cout<<"Enter a number: ";
    cin>>a;

    switch(a){
        case 1:
            cout<<"Support";
            break;

        case 2:
            cout<<"Billing";
            break;

        case 3:
            cout<<"Technical Issue";
            break;

        case 4:
        case 0:
            cout<<"Speak to agent";
            break;

        default:
            cout<<"INVALID REQUEST";
    }

    return 0;
}