#include <iostream>
using namespace std;
int main(){

    int n,i;
    cout<<"enter value of n :";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%3==0)
            continue;
        else
            cout<<i<<endl;
    }
}
