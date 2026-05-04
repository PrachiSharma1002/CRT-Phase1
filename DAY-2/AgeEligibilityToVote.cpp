#include<iostream>
 using namespace std;
 int main(){
    
    int a;
     cout<<"Enter Age:";
     cin>>a;

    if(a>=18&&a<=99)
        cout<<"Eligible to vote";
    else if(a<18&&a>0)
        cout<<"Not eligible to vote";
    else if(a>=100)
        cout<<"Eligible to vote (Century)";
    else 
        cout<<"Invalid Age";
 return 0;
 }