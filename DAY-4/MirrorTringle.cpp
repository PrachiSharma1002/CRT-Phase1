
 #include<iostream>
 using namespace std;

 int main(){
   int n=4;
   
   for(int i = 1; i <= n; i++) { //Rows
     for(int j = 1; j <= n-i; j++) { //space
         cout << "  ";
     }
     for(int k = 1; k <= i; k++) { //Columns
         cout << " *";
     }
     cout << endl;
 }
}
  
