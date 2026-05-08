//Multiple inheritance

#include <iostream>
using namespace std;

class Player{
    public:
    string name;
    int age;

    void setName(string n){
        name = n;
    }
};

class Cricketer {
    public:
    int runs;

    void setRuns(int r){
        runs = r;
    }
    
};

class IndianCricketer : public Player, public Cricketer{ // Multiple inheritance
    public:
    string state;

    void setState(string s){
        state = s;
    }
    void show(){
        cout << "Name: " << name << endl; 
        cout << "Runs: " << runs << endl;
        cout << "State: " << state << endl;
    }
};




int main(){
    int r1;
    cout<<"Enter runs"<<" ";
    cin>>r1;
    string s1;
    cout<<"Enter state"<<" ";
    cin>>s1;
    IndianCricketer c1;
    c1.setName("Virat");
    c1.setRuns(r1);
    c1.setState(s1);
    c1.show();
    int r2;
    cout<<"Enter runs"<<" ";
    cin>>r2;
    string s2;
    cout<<"Enter state"<<" ";
    cin>>s2;
    IndianCricketer c2;
    c2.setName("Rohit");
    c2.setRuns(r2);
    c2.setState(s2);
    c2.show();
    return 0;
}

