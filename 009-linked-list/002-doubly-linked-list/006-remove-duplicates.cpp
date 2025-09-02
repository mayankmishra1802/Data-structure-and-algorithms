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
node* insertAtTail(node* head, int x) {
    node* n = new node(x);
    if (head == NULL) {
        return n;
    }
    node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = n;
    n->prev = temp;
    return head;
}
node* removeDuplicates(node* head) {
    if (!head) return NULL;

    node* curr = head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->data == curr->next->data) {
            node* dup = curr->next;
            curr->next = dup->next;
            if (dup->next) dup->next->prev = curr;
            delete dup;
        } else {
            curr = curr->next;
        }
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
    head = insertAtTail(head, 10);
    head = insertAtTail(head, 20);
    head = insertAtTail(head, 20);
    head = insertAtTail(head, 30);
    head = insertAtTail(head, 40);
    head = insertAtTail(head, 40);
    head = insertAtTail(head, 40);
    head = insertAtTail(head, 50);
    printDLL(head);
    head = removeDuplicates(head);
    printDLL(head);
    return 0;
}
