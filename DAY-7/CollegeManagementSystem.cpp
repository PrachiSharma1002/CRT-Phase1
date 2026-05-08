
// College management system


#include<iostream>
using namespace std;

class College{

    public:
    string name;
    int age;


    void setName(string n){
        name = n;

    }
    virtual void setAge(int a){
        age = a;
    }
};

class Student : public College{
    public:
    int rollno;
    string course;

    void setRollNo(int r){
        rollno = r;
    }
    void setCourse(string c){
        course = c;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Course : "<<course<<endl;
    }
};


class Teacher : public College{
    public:
    int teacherID;
    string subject;

    void setTeachID(int t){
        teacherID = t;
    }
    void setTeachingSubject(string s){
        subject = s;
       
    }
     void setAge(int a){
        age = 18;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Teacher ID: "<<teacherID<<endl;
        cout<<"Teaching Subject: "<<subject<<endl;
    }
};




int main(){
    int r;
    int a;
    cout<<"Enter rollno"<<" ";
    cin>>r;
    cout<<"Enter age"<<" ";
    cin>>a;
    Student s1;
    s1.setName("Prachi");
    s1.setAge(a);
    s1.setRollNo(r);
    s1.setCourse("BTech");
    s1.show();
    int t;
    
    cout<<"Enter teacher ID"<<" ";
    cin>>t;
    
    Teacher t1;
    t1.setName("Mr. Saurav Kumar");
    t1.setAge(a);
    t1.setTeachID(t);
    t1.setTeachingSubject("Data Structures");
    t1.show();

    return 0;
}