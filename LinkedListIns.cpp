#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void LinkedlistTraversal(struct Node * ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
}

struct Node * insertAtbeginning(struct Node * head,int new_data){
    struct Node * n= new Node();
    n->data=new_data;
    n->next=head;
    return n;

}

struct Node * insertinBetween(struct Node * head,struct Node * prev_node,int new_data){
    struct Node *ptr= new Node();
    ptr->data=new_data;
    ptr->next=prev_node->next;
    prev_node->next=ptr;
    return head;
}

struct Node * insertAtend(struct Node * head,int new_data){
    struct Node *ptr=new Node();
    ptr->data=new_data;

    struct Node * p= head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node * deletefromfirst(struct Node * head){
    struct Node * ptr=head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node * deletefromEnd(struct Node * head){
    struct Node * ptr=head;
    struct Node * qtr=head->next;
    while(qtr!=NULL){
        ptr=ptr->next;
        qtr=qtr->next;
    }
    ptr->next=NULL;
    free(qtr);
    return head;

}

struct Node * deleteAfterNode(struct Node * head,int key){
    struct Node *p= head;
    struct Node *q=head->next;
    while(q->data!=key && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = new Node();
    second=new Node();
    third=new Node();
    fourth=new Node();

    head->data=7;
    head->next=second;

    second->data=1;
    second->next=third;

    third->data=5;
    third->next=fourth;

    fourth->data=10;
    fourth->next=NULL;

    head = insertAtbeginning(head,8);
    head= insertAtend(head,78);
    head=insertinBetween(head,head,65);
    deleteAfterNode(head,65);
    LinkedlistTraversal(head);
    return 0;
}