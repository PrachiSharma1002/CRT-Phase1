

#include<iostream>
using namespace std;

int main(){
  int i,n;
  cout<<"Enter value of n: ";
  cin>>n;

  i = 1;
  do{
    cout<<i<<endl;
    ++i;
  }
  while(i <= n);
  
  return 0;
}

