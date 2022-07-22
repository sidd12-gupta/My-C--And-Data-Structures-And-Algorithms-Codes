#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void LinkedListTraversal(struct Node * ptr){
    while(ptr != NULL){
        cout<<"->"<<ptr->data;
        ptr=ptr->next;
        
    }
    
}


 
void InsertionAtStart(struct Node ** head_ref, int new_data){
    struct Node * new_node=new Node();

    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
    
    

}
void InsertionInBetween(struct Node * pptr, int new_data){
    if(pptr==NULL){
        cout<<"Previous Node Can't Be Null";
    }

    struct Node * new_node=new Node();
    new_node->data=new_data;
    new_node->next=pptr->next;
    pptr->next=new_node;
    return ;

}
void InsertionAtEnd(struct Node *ptr,int new_data){
    struct Node * n = new Node();
    

    if(n==NULL){
        cout<<"OVERFLOW"<<endl;
        
    }
    else{
        n->data=new_data;
        if(ptr==NULL){
            ptr->next=NULL;
            
            
        }
    
      while(ptr!=NULL){
        ptr=ptr->next;
        
      }

    ptr->next=n;
    
    n->next=NULL;
    

}
}
void DeletionofNode(struct Node ** head_ref , int checker){

    struct Node * temp = *head_ref;
    struct Node * prev = NULL;

    if(temp != NULL  && temp->data == checker){
        *head_ref=temp->next;
        delete temp;
        

    }

    else{
        while(temp != NULL && temp->data != checker){
            prev = temp;
            temp = temp->next;
        }

        if(temp != NULL){
            
        }

        prev->next=temp->next;
        delete temp;
        
    }

}



int main(){
    struct Node * head=NULL; 
    struct Node * second=NULL;
    struct Node * third=NULL;

    head=new Node();
    second=new Node();
    third=new Node();

    head->data=5;
    head->next=second;

    second->data=9;
    second->next=third;

    third->data=8;
    third->next=NULL;

    InsertionAtStart(&head,11);

    InsertionInBetween(second,17);

    

    DeletionofNode(&head,17);

    InsertionAtEnd(head,15);

    

    

    LinkedListTraversal(head);


    return 0;

}
