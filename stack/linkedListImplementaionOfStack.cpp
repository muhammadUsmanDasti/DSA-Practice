#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* link;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->link = top;
        top = temp;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        top = top->link;
        delete temp;
    }
    int getTop() {
        return top->data;
    }
    bool isEmpty() {
        if(top == NULL) {
            return true;
        }
        else {
            return false;
        }
    }

    void printStack() {
        cout << "stack: ";
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(5);
    s.printStack();
    s.push(10);
    s.printStack();
    s.pop();
    s.printStack();
    s.push(50);
    s.printStack();
    int top = s.getTop();
    cout<<top;
    return 0;
}