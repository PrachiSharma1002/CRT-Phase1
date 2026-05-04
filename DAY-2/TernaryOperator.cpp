
#include<iostream>
 using namespace std;
 int main(){
    
    int a , b ;
     cout<<"Enter two Numbers:";
     cin>>a>>b;
     cout<<"Greater number is :";
    (a > b) ? cout<<a : (a < b) ? cout<<b : cout<<"Both are equal";
 return 0;
}