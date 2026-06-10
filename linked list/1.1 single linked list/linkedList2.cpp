#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *link;
};
int main(){
    //method #1
    // Node *head = new Node();
    // head->data = 45;
    // head->link = nullptr;
    // Node *current = new Node();
    // current->data = 50;
    // current->link = nullptr;
    // head->link = current;
    // Node *current1 = new Node();
    // current1->data = 65;
    // current1->link = nullptr;
    // current->link = current1;
    // return 0;


    //method #2
    Node *head = new Node();
    head->data = 45;
    head->link = nullptr;
    Node *current = new Node();
    current->data = 50;
    current->link = nullptr;
    head->link = current;
    current = new Node();
    current->data = 65;
    current->link =nullptr;
    head->link->link = current;


    //memory cleanup
    Node *temp = head;
    while (temp != nullptr) {
        Node *next = temp->link; // Save the next address
        delete temp;             // Delete the current node
        temp = next;             // Move to the next node
    }
    head = nullptr;
    return 0;
}