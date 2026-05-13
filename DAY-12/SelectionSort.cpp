
// INSERTION SORT

#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
        a=b;
        b=temp;
}

int insertion_sort(int num[],int n){
    for(int i=1;i<n;i++){
        int key = num[i];
        int j=i-1;
        while(j>=0 && num[j]>key){
            num[j+1]= num[j];
            j--; 
        }
        num[j+1]=key;
    }
}


int main(){
   int arr[5]={64,93,6,3,48};
   int size= sizeof(arr)/sizeof(arr[0]);
   insertion_sort(arr,size);
   cout<<"Sorted array: ";
   for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}
