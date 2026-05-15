#include <iostream>
using namespace std;

class Queue {
private:
    int arr[100];     
    int frontIndex;   
    int rearIndex;    
    int count;        
public:
    
    Queue() {
        frontIndex = 0;
        rearIndex = -1;
        count = 0;
    }

    
    void enqueue(int value) {
        if (count == 100) {
            cout << "Queue Overflow" << endl;
            return;
        }

        rearIndex++;
        arr[rearIndex] = value;
        count++;
    }

    
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return;
        }

        frontIndex++;
        count--;
    }

    
    int front() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        return arr[frontIndex];
    }

    
    int rear() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        return arr[rearIndex];
    }

    
    int size() {
        return count;
    }

    
    bool isEmpty() {
        return (count == 0);
    }

    
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }

        for (int i = frontIndex; i <= rearIndex; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
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

    cout << "Is Empty? " << q.isEmpty() << endl;   

    return 0;
}