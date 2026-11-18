// Singly linked list: insert at beginning, delete from end, insert at position
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertBegin(int val) {
    Node* n = new Node();
    n->data = val;
    n->next = head;
    head = n;
}

void deleteEnd() {
    if (!head) { cout << "List is empty" << endl; return; }
    if (!head->next) { delete head; head = NULL; return; }
    Node* t = head;
    while (t->next->next) t = t->next;
    delete t->next;
    t->next = NULL;
}

void insertPos(int val, int pos) {
    if (pos == 1) { insertBegin(val); return; }
    Node* t = head;
    for (int i = 1; i < pos - 1 && t; i++) t = t->next;
    if (!t) { cout << "Invalid position" << endl; return; }
    Node* n = new Node();
    n->data = val;
    n->next = t->next;
    t->next = n;
}

void display() {
    if (!head) { cout << "List is empty" << endl; return; }
    Node* t = head;
    while (t) { cout << t->data << " "; t = t->next; }
    cout << endl;
}

int main() {
    int ch, val, pos;
    do {
        cout << "\n1.Insert Begin 2.Delete End 3.Insert Position 4.Display 5.Exit\nChoice: ";
        cin >> ch;
        switch (ch) {
            case 1: cout << "Value: "; cin >> val; insertBegin(val); break;
            case 2: deleteEnd(); break;
            case 3: cout << "Value & Position: "; cin >> val >> pos; insertPos(val, pos); break;
            case 4: display(); break;
            case 5: break;
            default: cout << "Invalid choice" << endl;
        }
    } while (ch != 5);
    return 0;
}
