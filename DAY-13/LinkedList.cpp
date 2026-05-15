// CREATING A LINKED LIST
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
void printsNode(Node* n1) {
    Node* head = n1;
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;   
    }
    cout << endl;
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

    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<n3<<endl;
    cout<<n4<<endl;
    printsNode(n1);
    return 0;
}