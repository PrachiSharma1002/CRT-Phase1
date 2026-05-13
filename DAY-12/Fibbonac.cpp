

// FIBBO
#include<iostream>
using namespace std;

int fib(int n) {
    if ( n == 1||n==2) {
        return 1;
    }
    if(n==0){
        return 0;
    }
    return fib(n-1)+ fib(n-2 );
}

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout << "Fib of "<<n<<" is: " <<fib(n) << endl;
    return 0;
}
