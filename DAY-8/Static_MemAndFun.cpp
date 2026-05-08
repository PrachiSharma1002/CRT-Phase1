
// Static Member & Static Member Function

#include<iostream>
using namespace std;

class Employee{
    public:
    static int reg_no;

    Employee(){
        reg_no++;
    }

    static void show(){
        cout<<"Employee reg no is: "<<reg_no<<endl;
    }

};

int Employee ::reg_no =100;

int main(){
    Employee e1;
    Employee::show();
    Employee e2;
    Employee::show();
    Employee e3;
    Employee::show();

}

