// #include<iostream>
//  using namespace std;
//  int main(){
    
//     int a , b , c;
//      cout<<"Enter Three Numbers:";
//      cin>>a>>b>>c;

//     if(a>b&&a>c)
//         cout<<"a is greater"<<a;
//     else if(b>a&&b>c)
//         cout<<"b is greater"<<b;
//     else 
//         cout<<" c is greater"<<c;
//  return 0;
//  }




//CompareThreeNumbersNestedIfElse


 #include<iostream>
 using namespace std;
 int main(){
    
    int a , b , c;
     cout<<"Enter Three Numbers:";
     cin>>a>>b>>c;
    if(a>b){
        if(a>c)
            cout<<"a is greter";
        else
            cout<<"c is greater";
        }
    else{
        
        if(b > c)
            cout<<"b is greatest";
        else 
            cout<<"c is greatest";
        }
    
return 0;
 }
