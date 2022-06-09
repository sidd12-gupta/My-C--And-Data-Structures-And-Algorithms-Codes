#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node*createNode(int key){
    struct Node *n = new Node();
    n->data=key;

    n->left=NULL;
    n->right=NULL;
}

struct Node *BSTfromPre(int pre[],int n){
    struct Node *root = createNode(pre[0]);
    struct Node *curr =root;
    for(int i=1;i<n;i++){
        if(pre[i]<curr->data){
            curr->left=createNode(pre[i]);
            
        }

        else{
            curr->right=createNode(pre[i]);
            curr=curr->right;
        }
    }
}

int main(){
    int pre[]={10,5,1,7,40,50};
    int n=6;


    struct Node *root = BSTfromPre(pre,n);

}