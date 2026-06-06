#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int v) {
        val = v;
        next = nullptr;
        prev = nullptr;
    }
};

void insert(Node*& head, int v) {
    Node* newNode = new Node(v);

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void deleteNode(Node*& head, int v) {
    if (!head) return;

    Node* temp = head;

    while (temp && temp->val != v) {
        temp = temp->next;
    }

    if (!temp) return;

    if (temp == head) {
        head = head->next;
        if (head) {
            head->prev = nullptr;
        }
        delete temp;
        return;
    }

    if (temp->next) {
        temp->next->prev = temp->prev;
    }

    temp->prev->next = temp->next;

    delete temp;
}

void display(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void deleteList(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    display(head);

    deleteNode(head, 20);
    display(head);

    insert(head, 50);
    display(head);

    deleteList(head);

    return 0;
}