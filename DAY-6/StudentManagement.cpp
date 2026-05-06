
#include<iostream>
using namespace std;

class student{
  public:
    string name;
    int rollno;
    int regNo;
    string emailId;
    long long phnNo;
    float cgpa;


    student (){
       
        cout<<"Future student details not entered"<<endl;
    }

    student(string n, int r, int reg, string email,long long p, float c){
        name = n;
        rollno = r;
        regNo = reg;
        emailId = email;
        phnNo = p;
        cgpa = c;
        

    }
    void display(){
        cout<<"Student details are: "<<endl<<endl;
        cout<<"Name: "<<name<<endl; 
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Registration No:"<<regNo<<endl;
        cout<<"Email Id: "<<emailId<<endl;  
        cout<<"Phone Number"<<phnNo<<endl;
        cout<<"CGPA: "<<cgpa<<endl<<endl;
        
    }

};
int main(){
    student s1("Deepak", 01, 101,"Deepak@08",8209412844,8.6);
    s1.display();
    student s2("Prachi", 02, 102,"prachi@10",8949272873,8.1);
    s2.display();
    student s3;  
    return 0;

    }