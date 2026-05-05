
#include<iostream>
using namespace std;
int CoffeeShot(int a){
  return a*30;
}
int main(){
  int n;
  cout<<"Enter number of coffee shots: ";
  cin>>n;
  cout<<"Total volume :"<<CoffeeShot(n)<< " ml";
}