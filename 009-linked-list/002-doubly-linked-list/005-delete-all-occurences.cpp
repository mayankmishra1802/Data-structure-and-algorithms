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
    } else {
        n->next = head;
        head->prev = n;
        head = n;
    }
    return head;
}

node* deleteAllOccurrences(node* head, int target) {
    if (!head) return NULL;

    node* curr = head;
    while (curr != NULL) {
        if (curr->data == target) {
            node* toDelete = curr;
            if (curr == head) {
                head = head->next;
                if (head) head->prev = NULL;
            } else {
                if (curr->prev) curr->prev->next = curr->next;
                if (curr->next) curr->next->prev = curr->prev;
            }
            curr = curr->next;
            delete toDelete;
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
    head = insertBeforeHead(head, 10);
    head = insertBeforeHead(head, 20);
    head = insertBeforeHead(head, 30);
    head = insertBeforeHead(head, 20);
    head = insertBeforeHead(head, 40);
    printDLL(head);
    int target = 20;
    head = deleteAllOccurrences(head, target);
    printDLL(head);
    return 0;
}
