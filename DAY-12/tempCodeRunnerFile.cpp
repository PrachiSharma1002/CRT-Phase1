
int main(){
   int arr[5]={64,93,6,3,48};
   int size= sizeof(arr)/sizeof(arr[0]);
   bubble_sort(arr,size);
   cout<<"Sorted array: ";
   for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}