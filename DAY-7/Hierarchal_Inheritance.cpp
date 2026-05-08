// Hierarchical inheritance

#include <iostream>
using namespace std;

class Player{
    public:
    string name;
    

    void setName(string n){
        name = n;
    }
};

class IndianFootballer : public Player {
   public:
    int goals;

    void setGoals(int g){
        goals = g;
    }
    
    void show(){
        cout << "Name: " << name << endl; 
        cout << "Goals: " << goals << endl;
    }
};


class IndianCricketer : public Player { // Multiple inheritance
    public:
    int runs;

    void setRuns(int r){
        runs = r;
    }
    void show(){
        cout << "Name: " << name << endl; 
        cout << "Runs: " << runs << endl;
        
    }
};




int main(){
    int r;
    cout<<"Enter runs"<<" ";
    cin>>r;
    IndianCricketer c;
    c.setName("Virat");
    c.setRuns(r);
    c.show();
    int g;
    cout<<"Enter goals"<<" ";
    cin>>g;
    IndianFootballer f;
    f.setName("Sunil");
    f.setGoals(g);
    f.show();
    return 0;
}



