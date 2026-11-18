// Circular queue using array: enqueue, dequeue, display
#include <iostream>
using namespace std;

int q[100], front = -1, rear = -1, size;

void enqueue(int val) {
    if ((rear + 1) % size == front) { cout << "Queue is full" << endl; return; }
    if (front == -1) front = 0;
    rear = (rear + 1) % size;
    q[rear] = val;
}

void dequeue() {
    if (front == -1) { cout << "Queue is empty" << endl; return; }
    cout << "Dequeued: " << q[front] << endl;
    if (front == rear) front = rear = -1;
    else front = (front + 1) % size;
}

void display() {
    if (front == -1) { cout << "Queue is empty" << endl; return; }
    int i = front;
    while (i != rear) { cout << q[i] << " "; i = (i + 1) % size; }
    cout << q[rear] << endl;
}

int main() {
    int ch, val;
    cout << "Enter queue size: "; cin >> size;
    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Display 4.Exit\nChoice: ";
        cin >> ch;
        switch (ch) {
            case 1: cout << "Value: "; cin >> val; enqueue(val); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: break;
            default: cout << "Invalid choice" << endl;
        }
    } while (ch != 4);
    return 0;
}
