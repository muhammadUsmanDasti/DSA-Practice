#include<iostream>
using namespace std;
struct node {
    int data;
    node *link;
};
void printData(node *head){
    if(head==NULL){
        cout<<"The list is empty ";
        return;
    }
    node *temp = head;
    cout<<endl<<"The list: ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->link;
    }
    return;
}
// void addAtEnd(node *&head, int data){
//     node *temp = head;
//     node *ptr = new node();
//     ptr->data = data;
//     ptr->link = nullptr;
//     if(head==NULL){
//         head = ptr;
//         return;
//     }
//     while(temp->link!=NULL){
//         temp = temp->link;
//     }
//     temp->link = ptr;
// }
void addAtEnd(node *&head,node *&tail,int data){
    node *temp = new node();
    temp->data = data;
    temp->link = nullptr;
    if(head==nullptr){
        head=temp;
        tail=temp;
    }
    else{
        tail->link=temp;
        tail=temp;
    }
}


void clearMemory(node*& head){
    node *temp = head;
    while(temp!=NULL){
        node *next = temp->link;
        delete temp;
        temp = next;
    }
    head = nullptr;
}
int main(){
    // node *head = nullptr;
    // head = new node();
    // head->data = 45;
    // head->link = nullptr;

    // node *current = nullptr;
    // current = new node();
    // current->data = 50;
    // current->link = nullptr;
    // head->link = current;

    // current = new node();
    // current->data = 55;
    // current->link = nullptr;
    // head->link->link = current;


    // addAtEnd(head, 60);


    //Method# 2 optimal add at end
    node *head = nullptr;
    node *tail = nullptr;
    
    addAtEnd(head,tail,45);
    addAtEnd(head,tail,50);
    addAtEnd(head,tail,55);
    addAtEnd(head,tail,60);
    addAtEnd(head,tail,65);

    printData(head);

    clearMemory(head);
    
    return 0;
}