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


void printsNode(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


Node* ReverseALinkedList(Node* head) {
    Node* curr = head;
    Node* pre = NULL;

    while (curr != NULL) {
        Node* forw = curr->next; 
        curr->next = pre;        
        pre = curr;             
        curr = forw;             
    }

    
    return pre;
}

int main() {
   
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);

    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

   
    cout << "Address of node1: " << n1 << endl;
    cout << "Address of node2: " << n2 << endl;
    cout << "Address of node3: " << n3 << endl;
    cout << "Address of node4: " << n4 << endl;

    
    cout << "Original Linked List: ";
    printsNode(n1);

   
    n1 = ReverseALinkedList(n1);

    
    cout << "Reversed Linked List: ";
    printsNode(n1);

    return 0;
}