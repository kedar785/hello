#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertFirst(Node* &head, int value) {
    Node* newNode = new Node();   // new node create
    newNode->data = value;
    newNode->next = head;         // new node ka next old head

    head = newNode;               // head update
}

void display(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;

    insertFirst(head, 30);
    insertFirst(head, 20);
    insertFirst(head, 10);

    cout << "Linked List: ";
    display(head);

    return 0;
}