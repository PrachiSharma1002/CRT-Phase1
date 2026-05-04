#include<iostream>
using namespace std;
int main(){
    
    int a;
    cout<<"Enter Age";
    cin>>a;
    
    if(a>18)
        cout<<"20% Discount";
    else if(a==18)
        cout<<"15% Discount";
    else if(a<18)
       cout<<"Not eligible for discount";
return 0;
}
