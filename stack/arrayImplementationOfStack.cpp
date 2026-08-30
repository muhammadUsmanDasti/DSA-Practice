#include <iostream>
#define MAX_SIZE 101
using namespace std;

class Stack {
private:
    int s[MAX_SIZE];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    int top() {
        return s[topIndex];
    }
    bool isEmpty() {
        if(topIndex == -1) {
            return true;
        }
        else {
            return false;
        }
    }
    void push(int x) {
        if(topIndex == MAX_SIZE - 1) {
            cout<<"The stack is full, cannot perform push(): ";
            return;
        }
        
        topIndex++;
        s[topIndex] = x;
    }
    void pop() {
        if(topIndex == -1) {
            cout<<"Cannot perform pop(), the stack is empty";
            return;
        }
        topIndex--;
    }
    void printStack() {
        cout<<"stack: ";
        for (int i = 0; i <= topIndex; i++) {
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    
};
int main(){
    Stack s;
    s.push(5);
    s.printStack();
    s.push(30);
    s.printStack();
    s.push(10);
    s.printStack();
    s.isEmpty();
    s.printStack();
    s.pop();
    s.printStack();
    s.top();
    s.push(100);
    s.printStack();
    return 0;
}