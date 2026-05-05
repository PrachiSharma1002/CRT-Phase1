#include<iostream>
using namespace std;

int AreaOfRect(int l,int w){
  return l*w;
}

int main(){
  int l,w;
  cout<<"Enter length and width of the rectangle: ";
  cin>>l>>w;
  cout<<"Area of rectangle is: "<<AreaOfRect(l,w)<<endl;
}