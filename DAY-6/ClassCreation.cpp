// class and object
#include<iostream>
using namespace std;

class student{
    public:
      string name;
      int age;
      int rollno;
      string course;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Course: "<<course<<endl;
    }
};
int main(){
    student s1;
    student s2;
    s1.name = "Prachi";
    s1.age = 21;
    s1.rollno = 101;
    s1.course = "BTech";
    s1.display();
    s2.name = "Deepak";
    s2.age = 21;
    s2.rollno = 102;
    s2.course = "BTech";
    s2.display();
    return 0;
}

