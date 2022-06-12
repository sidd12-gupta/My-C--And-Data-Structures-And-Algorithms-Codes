#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;

};

void CircularLLTraversal(struct Node * ptr){

    if(ptr==NULL){
        cout<<"No Null nodes accepted for Circular Linked List"<<endl;
    }

    else{
        while(ptr!=NULL){
        cout<<"->"<<ptr->data;
        ptr=ptr->next;
        }
    }

}

int main(){

    struct Node * head = NULL;
    struct Node * second = NULL;
    struct Node * third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data=6;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=34;
    third->next=head;

    CircularLLTraversal(head);

    return 0;


}