#include <iostream>
using namespace std;

class Stack {
private:
    int arr[100]; 
    int topIndex;  

public:
    
    Stack() {
        topIndex = -1;
    }

    
    void push(int val) {
        if (topIndex < 99) {
            topIndex++;
            arr[topIndex] = val;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    
    void pop() {
        if (topIndex >= 0) {
            topIndex--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    
    int top() {
        if (topIndex >= 0) {
            return arr[topIndex];
        } else {
            cout << "Stack is Empty" << endl;
            return -1;   
        }
    }

    
    int size() {
       if(topIndex>=0){
        return ++topIndex;
    }
    else{
        cout<<"Stack is empty";
    }
    }

    
    bool isEmpty(){
    if(topIndex<=-1){
        return true;
    }
    else return false;
    }
};

int main() {
    Stack stk1;

    stk1.push(1);
    stk1.push(2);
    stk1.push(3);

    stk1.pop();   

    cout << "Top element: " << stk1.top() << endl;
    cout << "Size of stack: " << stk1.size() << endl;
    cout << "Is stack empty? " << stk1.isEmpty() << endl;

    return 0;
}

