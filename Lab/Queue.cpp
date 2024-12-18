#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* queue;

public:
    Queue(int capacity) {
        size = capacity;
        front = -1;
        rear = -1;
        queue = new int[size];
    }

    ~Queue() {
        delete[] queue;
    }

    void enqueue(int value) {
        if (rear == size - 1) {
            cout << "Queue is full. Cannot enqueue " << value << endl;
            return;
        }

        if (front == -1) front = 0; 

        queue[++rear] = value;
        cout << value << " enqueued to the queue." << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        cout << queue[front] << " dequeued from the queue." << endl;
        front++;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5); 

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70); 
    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    return 0;
}
