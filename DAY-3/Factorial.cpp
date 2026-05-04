
#include<iostream>
using namespace std;

int main(){
  int i,n,ans;
  cout<<"Enter value of n: ";
  cin>>n;

  ans = 1;
  for(i=1;i<=n;i++){
    ans *= i;
  }
  cout<<"Factorial of "<<n<<" is: "<<ans;
}