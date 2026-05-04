#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year:";
    cin>>year;
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? cout<<"Leap Year" : cout<<"Not a Leap Year";
    return 0;
}