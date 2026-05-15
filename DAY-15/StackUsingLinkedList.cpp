
#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    
    Node(int value) {
        data = value;
        next = NULL;
    }
};


class Stack {
private:
    Node* topNode;   
    int count;       

public:
    
    Stack() {
        topNode = NULL;  
        count = 0;
    }

    
    void push(int value) {
        Node* temp = new Node(value);

        
        temp->next = topNode;

        
        topNode = temp;

        count++;
    }

    
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }

        Node* temp = topNode;     
        topNode = topNode->next;  
        delete temp;              
        count--;
    }

    
    int top() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        return topNode->data;
    }

    
    int size() {
        return count++;
    }

    
    bool isEmpty() {
        return (topNode == NULL);
    }

    
    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return;
        }

        Node* temp = topNode;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);

    cout << "Stack elements (top to bottom): ";
    stk.display();          

    cout << "Top element: " << stk.top() << endl;   
    cout << "Size: " << stk.size() << endl;         
    cout << "Is Empty? " << stk.isEmpty() << endl;  

    stk.pop();  

    cout << "After one pop:" << endl;
    cout << "Top element: " << stk.top() << endl;   
    cout << "Size: " << stk.size() << endl;         

    return 0;
}