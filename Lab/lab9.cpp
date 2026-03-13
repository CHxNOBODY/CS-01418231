#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertFirst(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertLast(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(int value, int position) {
    if (position == 1) {
        insertFirst(value);
        return;
    }

    Node* newNode = new Node;
    newNode->data = value;

    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position not valid\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {

    cout << "Insert First:\n";
    insertFirst(10);
    printList();

    cout << "Insert Last:\n";
    insertLast(20);
    printList();

    cout << "Insert Position 2:\n";
    insertAtPosition(15, 2);
    printList();

    cout << "Insert Position 3:\n";
    insertAtPosition(17, 3);
    printList();

    return 0;
}