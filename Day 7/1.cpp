#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int v) {
        val = v;
        next = nullptr;
    }
};

void insert(Node*& head, int v) {
    Node* newNode = new Node(v);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteNode(Node*& head, int v) {
    if (!head) return;

    if (head->val == v) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* curr = head;

    while (curr->next && curr->next->val != v) {
        curr = curr->next;
    }

    if (!curr->next) return;

    Node* temp = curr->next;
    curr->next = temp->next;
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

    display(head);

    deleteNode(head, 20);
    display(head);

    deleteList(head);

    return 0;
}