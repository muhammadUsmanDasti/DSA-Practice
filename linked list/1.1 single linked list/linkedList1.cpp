#include<iostream>
using namespace std;
struct node {
    int data;
    node* link;
};

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
    return 0;
}