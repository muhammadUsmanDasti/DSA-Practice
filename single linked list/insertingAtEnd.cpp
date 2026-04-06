#include<iostream>
using namespace std;
struct node {
    int data;
    node* link;
};
void at_the_end(node* head,int data){
    if(head==NULL){
        cout<<"the list is empty";
    }
    node* ptr = head;
    node* temp = new node();
    temp->data= data;
    temp->link=NULL;
    while(ptr->link!=NULL){
        ptr = ptr->link;
    }
    ptr->link=temp;
    
}

int main(){
    node* HEAD = NULL;
    node* n1 = new node();
    HEAD = n1;
    HEAD->data = 45;
    HEAD->link = NULL;
    node* current = new node();
    current->data=55;
    current->link=NULL;
    HEAD->link= current;

    current = new node();
    current->data= 65;
    current->link=NULL;
    HEAD->link->link = current;

    at_the_end(HEAD,101);
    
    return 0;
}