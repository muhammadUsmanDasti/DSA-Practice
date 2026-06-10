#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *link;
};
int countingTheNodes(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->link;
    }
    return count;
}
void printData(Node *head){
    if(head==NULL){
        cout<<"The list is empty ";
        return;
    }
    Node *temp = head;
    cout<<endl<<"The list: ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->link;
    }
    return;
}
void clearMemory(Node*& head){
    Node *temp = head;
    while (temp != nullptr) {
        Node *next = temp->link; // Save the next address
        delete temp;             // Delete the current node
        temp = next;             // Move to the next node
    }
    head = nullptr;
}
int main(){
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
    
    int no_of_nodes = countingTheNodes(head);
    cout<<"Number of nodes in the linked list is: "<<no_of_nodes;

    printData(head);
    
    

    //freeing the meomory
    clearMemory(head);
    return 0;
}