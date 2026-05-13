
// Binary Search


#include<iostream>
using namespace std;

int binary_search(int num[],int n,int target){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(num[mid]==target)
            return  mid;
        else if(num[mid]<target)
            left=mid+1;
        else
            right=mid-1;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    int ans=binary_search(arr,size,5);
    cout<<"Element found at index: "<<ans<<endl;
}