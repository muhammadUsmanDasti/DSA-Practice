#include<iostream>
using namespace std;
struct node {
    int data;
    node* link;
};
void count_of_nodes(node* head){
    if(head==NULL){
        cout<<"the list is empty";
    }
    node* ptr = head;
    int count=0;
    while(ptr!=NULL){
        count++;
        cout<<ptr->data<<" ";
        ptr = ptr->link;
    }
    cout<<count;
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


    count_of_nodes(HEAD);
    return 0;
}