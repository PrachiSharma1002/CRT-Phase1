
#include<iostream>
using namespace std;
// void Discount(float amount){ //pass by value
void Discount(float &amount){ //pass by reference
  amount =amount*0.9;
//   amount =amount -amount*0.1;

}
int main(){
  float amount;
  cout<<"Enter amount of the article:";
  cin>>amount;

  Discount(amount);
  cout<<"After Discount:"<< amount<<endl;
}