
// Sum of array

#include<iostream>
using namespace std;

class Sum{
    public:
     int SumOfArray(int num[],int n){
        int sum =0;
        int i;
        for(i=0;i<5;i++){
            sum +=num [i];
        } 
     return sum;   
     }
};


int main(){
    // int arr[6]={1,2,3,4,5,6};
    // int sum =0;
    // int i;
    // for(i=0;i<6;i++){
    //     sum +=arr [i];
    // }
    // cout<<sum<<" Is the sum";

    int arr[5]={1,2,3,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    Sum s1;
    s1.SumOfArray(arr,size);
    cout<<s1.SumOfArray(arr,size);
    cout<<endl;

    return 0;

}