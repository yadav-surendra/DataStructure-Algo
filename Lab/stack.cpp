#include <iostream>
#define MAX 5
using namespace std; 

class Stack {
private:
    int arr[MAX]; 
    int top;
public:
    
    Stack() {
        top = -1; 
    }

    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow. Cannot push " << value << "\n";
            return;
        }
        arr[++top] = value;
        cout << value << " pushed onto stack.\n";
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow. Cannot pop.\n";
            return -1; 
        }
        int poppedValue = arr[top--];
        cout << poppedValue << " popped from stack.\n";
        return poppedValue;
    }

    bool isEmpty() {
        return top < 0;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    return 0;
}
