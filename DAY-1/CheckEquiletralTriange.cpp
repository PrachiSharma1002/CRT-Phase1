

#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cout<<"enter value of sides of three triagles:x ,y, z:";
    cin>> x >> y >> z;
    if(x==y&&y==z)
        cout<<"true";
    else
        cout<<"False";
    return 0;
}
