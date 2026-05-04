#include<iostream>
using namespace std;

int main(){
    int balance = 10000;   // initial balance
    int withdraw;

    cout<<"Available Balance: "<<balance<<endl;
    cout<<"Enter amount to withdraw: ";
    cin>>withdraw;

    // Check for valid amount
    if(withdraw <= 0){
        cout<<"Invalid amount!";
    }
    // Check multiple of 100
    else if(withdraw % 100 != 0){
        cout<<"Enter amount in multiples of 100!";
    }
    // Check sufficient balance
    else if(withdraw > balance){
        cout<<"Insufficient balance!";
    }
    else{
        balance -= withdraw;
        cout<<"Withdrawal successful!"<<endl;
        cout<<"Remaining Balance: "<<balance;
    }

    return 0;
}