#include<iostream>
using namespace std;
struct Node {
        int data;
        Node *link;
    };
int main(){
    Node *head = nullptr;
    head = new Node{45,nullptr};
    // head->data=45;
    // head->link=nullptr;
    cout<<head->data;
    delete head;   //not delete the head, but delete the node, to which head is pointing
    head= nullptr;
    return 0;
}