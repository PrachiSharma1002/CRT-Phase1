
#include<iostream>
using namespace std;
int CoffeeShot(int a =2){
  return a*30;
}
int main(){
  int n;
  
  cout<<"Total default volume :"<<CoffeeShot()<<endl;
  cout<<"Enter volume : ";
  cin>>n;
  cout<<"Total volume :"<<CoffeeShot(n)<<endl;
}


