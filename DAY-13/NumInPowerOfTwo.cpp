#include<iostream>
using namespace std;

bool NumInPowerOfTwo(int x){
    if(x==0)
        return false;
    if(x==1)
        return true;

    return (x%2==0)&&NumInPowerOfTwo(x/2);

}

int main(){
    int t;
    cout<<"Enter Number of test cases: ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter a number : "<<endl;
        cin>>n;
        bool result=NumInPowerOfTwo(n);
        if(result)
            cout<<n<<" is a power of 2."<<endl;
        else
            cout<<n<<" is not a power of 2."<<endl;

    }
    return 0;
}