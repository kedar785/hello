#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;

    Node* first = new Node();
    Node* second = new Node();

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = NULL;

    head = first;

    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}