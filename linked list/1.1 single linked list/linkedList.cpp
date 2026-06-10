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
    cout<<HEAD->data;
    return 0;
}