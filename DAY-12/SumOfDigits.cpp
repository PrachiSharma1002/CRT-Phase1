
// Sum of digits
#include<iostream>
using namespace std;

int sumOfDigits(int n) {
    
    if(n==0){
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout << "sum of digits "<<n<<" is: " <<sumOfDigits(n) << endl;
    return 0;
}










