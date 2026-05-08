// namespace

#include<iostream>
using namespace std;

namespace Virat{
    void show(){
        cout<<"Virat Kohli"<<endl;
    }
}
namespace Rohit{
    void show(){
        cout<<"Rohit Sharma"<<endl;
    }
}

int main(){

    Virat::show();
    Rohit::show();
    return 0;
}