#include<iostream>
using namespace std;
struct node {
    int data;
    node* link;
};
node* at_the_end(node* ptr,int data){
    if(ptr==NULL){
        cout<<"the list is empty";
    }
    node* current = new node();
    current->data=data;
    current->link=NULL;
    ptr->link=current;
    return ptr;
}

int main(){
    node* head = NULL;
    node* n1 = new node();
    head = n1;
    head->data=65;
    head->link=NULL;
    node* ptr;
    ptr=head;
    ptr = at_the_end(ptr,75);
    ptr = at_the_end(ptr,95);
    ptr = at_the_end(ptr,101);
    ptr = head;
    return 0;
}