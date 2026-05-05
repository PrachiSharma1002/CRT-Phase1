#include<iostream>
using namespace std;
int main(){
  int a ;
  cout<<"Enter value of a :";
    cin>>a;
  int *ptr = &a; //pointer to a
  cout<<"Value of a: "<<a<<endl;
  cout<<"Address of a: "<<&a<<endl;
  cout<<"Value of ptr: "<<ptr<<endl;
  int b = a;
//   *ptr = 15; //modifying a through pointer
cout<<ptr<<endl;
cout<<"Update value of a through pointer: "<<endl;
  cin>>*ptr; //modifying a through pointer
  cout<<"Value of a updated through pointer: "<<a<<endl;
  int &ref = a; //reference to a
  //ref = 20; //modifying a through reference
  cout<<"Update value of a through reference: "<<endl;
  cin>>ref; //modifying a through reference
  cout<<"Value of a updated through reference: "<<a<<endl;
  cout<<"Value of b : "<<b<<endl;
  cout<<"Address of b: "<<&b<<endl;
} 

