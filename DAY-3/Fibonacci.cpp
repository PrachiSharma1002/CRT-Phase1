#include <iostream>
using namespace std;    
int main(){
    int n,a=0,b=1,c;
    cout<<"Enter value of n: ";
    cin>>n;
    int i = 1;
    while(i <= n){
        cout<<a<<" ";
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return 0;
}