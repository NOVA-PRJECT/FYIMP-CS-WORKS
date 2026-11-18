// Stack using array: push, pop, display
#include <iostream>
using namespace std;

int stack[100], top = -1, size;

void push(int val) {
    if (top == size - 1) { cout << "Stack Overflow" << endl; return; }
    stack[++top] = val;
}

void pop() {
    if (top == -1) { cout << "Stack Underflow" << endl; return; }
    cout << "Popped: " << stack[top--] << endl;
}

void display() {
    if (top == -1) { cout << "Stack is empty" << endl; return; }
    for (int i = top; i >= 0; i--) cout << stack[i] << " ";
    cout << endl;
}

int main() {
    int ch, val;
    cout << "Enter stack size: "; cin >> size;
    do {
        cout << "\n1.Push 2.Pop 3.Display 4.Exit\nChoice: ";
        cin >> ch;
        switch (ch) {
            case 1: cout << "Value: "; cin >> val; push(val); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: break;
            default: cout << "Invalid choice" << endl;
        }
    } while (ch != 4);
    return 0;
}
