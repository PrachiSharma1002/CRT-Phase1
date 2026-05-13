// DSA

// Array

#include<iostream>
using namespace std;


int main(){
    int arr[5];//={1,2,3,4,5};
    
    // for(int i=0;i<5;i++){
    //     cout<<"Enter elements";
    //     cin>>arr[i];
    // }
    
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<endl;

    // }    



    // User Input of Array Elements

    int size= sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i<size ;i++){
        cout<<"Enter elements of array: ";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}