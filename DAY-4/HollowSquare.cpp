
 #include<iostream>
 using namespace std;

 int main(){
   int n;
   cout << "Enter the number of rows: ";
   cin >> n;
   
   for(int i = 1; i <= n; i++) { //Rows
     for(int j = 1; j <= n; j++) { //Column
      if(i==1||i==n||j==1||j==n){ //star
         cout << " *";
      }else{
         cout<<"  ";
      }
     }
     
     cout << endl;
 }
}
  