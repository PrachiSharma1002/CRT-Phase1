
// area of rectangle, square and circle using constructor overloading
#include<iostream>
using namespace std;

class area{
    public:
    int l;
    int b;
    int s;
    double r;


    area(){ // default constructor
       
        cout<<"Area is not defined because no dimensions are provided."<<endl;
            
    }
    // Constructor overloading
    area(int length, int breadth){
        l = length;
        b = breadth;
        cout<<"Area of rectangle is: "<<l*b<<endl;
    }

    area(int side){
        s = side;
        cout<<"Area of square is: "<<s*s<<endl;
    }

    area(double radius){
        r = radius;
        cout<<"Area of circle is: "<<3.14*r*r<<endl;
    }
};
int main(){
    
    area a1(5,10);
    area a2(7);
    area a3(3.5);
    area a4; // default constructor
  return 0;  
}