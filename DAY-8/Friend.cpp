
// friend function


#include<iostream>
using namespace std;

class Area{
    private:
    int length;
    int width;
    public:
    void setSides(int l, int w){
        length = l;
        width = w;
    }
    void getSides(){
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
    }

    friend void showArea(Area a);
};


void showArea(Area a){
    int area = a.length * a.width;
    cout<<"Area of rectangle is: "<<area<<endl;
}

int main(){
    Area a;
    a.setSides(5, 10);
    a.getSides();
    showArea(a);
    return 0;
}