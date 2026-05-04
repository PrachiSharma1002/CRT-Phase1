
#include<iostream>
  using namespace std;
  int main(){
    
     int a;
      cout<<"Enter Percentage:";
      cin>>a;

     if(a>=90)
         cout<<"Grade is A";
     else if(a<=89&&a>=80)
         cout<<"Grade is B";
     else if(a<=79&&a>=70)
         cout<<"Grade is C";
    else if(a<=69&&a>=60)
         cout<<"Grade is D";
     else 
         cout<<"FAIL";
  return 0;
 }