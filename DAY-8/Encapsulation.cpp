// Encapsulation

#include <iostream>
using namespace std;


class ATM{
    private:
    int balance = 50000; // Initial balance of the ATM  ;

    public:
    // Encapsulation: Providing public methods to access and modify private data
    void setBalance(int b){
        this->balance = b;
    }
    void withdraw(int amount){
        if(amount > balance){
            cout<<"Insufficient Balance"<<endl;
        }
        else{
            balance -= amount;
            cout<<"Amount Withdrawn: "<<amount<<endl;
            cout<<"Withdrawal Successful. Remaining Balance: "<<balance<<endl;
        }
    }
    int getBalance(){
            cout<<"Current Balance: "<<balance<<endl;
            return balance;
        }
    
};


int main(){
    int n;
    cout<<"Enter initial balance for the ATM: ";
    cin>>n;
    ATM atm; // Initialize ATM with a balance of 50000
    atm.setBalance(n);
    atm.getBalance();
    atm.withdraw(500); // Attempt to withdraw without setting balance
    atm.getBalance();
    return 0;
}

