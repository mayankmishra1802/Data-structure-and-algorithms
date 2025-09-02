#include<bits/stdc++.h>
using namespace std;
class node {
public:
    int data;
    node* prev;
    node* next;

    node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
node* insertBeforeHead(node* head, int x) {
    node* n = new node(x);
    if (head == NULL) {
        head = n;
    }
    else {
        n->next = head;
        head->prev = n;
        head = n;
    }
    return head;
}

node* reverseDLL(node* head) {
    if (head == NULL || head->next == NULL) return head;

    node* temp = NULL;
    node* curr = head;
    while (curr != NULL) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;  
    }
    if (temp != NULL) {
        head = temp->prev;
    }
    return head;
}

void printDLL(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    node* head = NULL;
    head = insertBeforeHead(head, 10);
    head = insertBeforeHead(head, 20);
    head = insertBeforeHead(head, 30);
    head = insertBeforeHead(head, 40);
    printDLL(head);
    head = reverseDLL(head);
    printDLL(head);
    return 0;
}
