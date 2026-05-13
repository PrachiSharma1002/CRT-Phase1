
// SELECTION SORT
#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
        a=b;
        b=temp;
}

int selection_sort(int num[],int n){
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(num[mini]>num[j]){
            mini=j;
            }
        }
        swap(num[i],num[mini]);
    }
}


int main(){
   int arr[5]={64,93,6,3,48};
   int size= sizeof(arr)/sizeof(arr[0]);
   selection_sort(arr,size);
   cout<<"Sorted array: ";
   for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

