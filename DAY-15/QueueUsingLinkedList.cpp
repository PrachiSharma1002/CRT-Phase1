#include <iostream>
using namespace std;

// Node class for Queue
class Node {
public:
    int data;
    Node* next;

    
    Node(int value) {
        data = value;
        next = NULL;
    }
};


class Queue {
private:
    Node* frontNode;   
    Node* rearNode;    
    int count;         

public:
    
    Queue() {
        frontNode = NULL;
        rearNode = NULL;
        count = 0;
    }

    
    void enqueue(int value) {
        Node* newNode = new Node(value);

        
        if (isEmpty()) {
            frontNode = rearNode = newNode;
        }
        else {
            rearNode->next = newNode;
            rearNode = newNode;
        }

        count++;
    }

    
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return;
        }

        Node* temp = frontNode;
        frontNode = frontNode->next;

        
        if (frontNode == NULL) {
            rearNode = NULL;
        }

        delete temp;
        count--;
    }

    
    int front() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        return frontNode->data;
    }

    
    int rear() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        return rearNode->data;
    }

    
    int size() {
        return count;
    }

    
    bool isEmpty() {
        return (frontNode == NULL);
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }

        Node* temp = frontNode;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Queue elements: ";
    q.display();                   

    cout << "Front element: " << q.front() << endl; 
    cout << "Rear element: " << q.rear() << endl;   
    cout << "Size: " << q.size() << endl;           

    q.dequeue();

    cout << "\nAfter one dequeue:" << endl;
    cout << "Queue elements: ";
    q.display();                   
    cout << "Front element: " << q.front() << endl; 
    cout << "Rear element: " << q.rear() << endl;   

    cout << "Is Empty? " << q.isEmpty() << endl;    

    return 0;
}