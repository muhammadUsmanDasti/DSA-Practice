#include <iostream>
#include <stack>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};
class ReverseLinkedlist {
private:
    stack<Node*> S;
public:
    void reverseLinkedlist(Node* &head) {
        Node* temp = head;
        while(temp != NULL) {
            S.push(temp);
            temp = temp->next;
        }
        temp = S.top();
        S.pop();
        head = temp;
        while(!S.empty()) {
            temp->next = S.top();
            S.pop();
            temp = temp->next;
        }
        temp->next = NULL;
    }
    void printData(Node* head){
    if(head==NULL){
        cout<<"The list is empty ";
        return;
    }
    Node *temp = head;
    cout<<endl<<"The list: ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    return;
}
};
int main() {
    //creating a simple linkedList
    Node *head = new Node();
    head->data = 45;
    head->next = nullptr;
    Node *current = new Node();
    current->data = 50;
    current->next = nullptr;
    head->next = current;
    current = new Node();
    current->data = 65;
    current->next =nullptr;
    head->next->next = current;

    ReverseLinkedlist R;
    R.printData(head);
    R.reverseLinkedlist(head);
    R.printData(head);
    return 0;
}