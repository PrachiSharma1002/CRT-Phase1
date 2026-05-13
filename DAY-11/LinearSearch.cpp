// Linear Search
#include<iostream>
using namespace std;

int linear_search(int num[],int n,int target){
    for(int i=0;i<n;i++){
        if(num[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    int ans=linear_search(arr,size,5);
    cout<<"Element found at"<<ans<<endl;
}

