

#include<iostream>
using namespace std;

int main(){
  int i,n;
  cout<<"Enter value of n: ";
  cin>>n;

  i = 1;
  while(i <= n){
    if(i%2==0)
        cout<<i<<endl;
    i++;
  }
  return 0;
}