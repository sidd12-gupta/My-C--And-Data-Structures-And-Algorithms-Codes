#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
}

void LLTraversal(struct Node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
}

void deleteLL(struct Node *ptr){



}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head->data=14;
    head->next=second;

    second->data=16;
    second->next=third;

    third->data=20;
    third->next=NULL;

    
}