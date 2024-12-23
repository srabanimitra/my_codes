#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};

queue<node *> q;
node *root = NULL;

int inorder(node*root){
    if(root!=NULL){
        cout<<root->data<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}

void perfectTreeBuild(int value){
    node *curr=new node();
    curr->data=value;
    curr->left=NULL;
    curr->right=NULL;

    if(root==NULL){
        root=curr;
        q.push(curr);
    }
    else{
        q.push(curr);
        node *fr = q.front();

        if(fr->left == NULL){
            fr->left = curr;
        }
        else if(fr->right == NULL){
           fr->right = curr;
           q.pop();
        }
    }
}

//void insertVal(int value){
//    node *temp=new node();
//    temp->data=value;
//    temp->left=NULL;
//    temp->right=NULL;
//
//    if(root==NULL)
//        root=temp;
//    else{
//        curr_node=root;
//        prev_node=root;
//
//        while(curr_node!=NULL){
//            prev_node=curr_node;
//            if(curr_node ->data<value)
//                curr_node=curr_node->right;
//            else
//                curr_node=curr_node->left;
//        }
//
//        if(prev_node->data<value)
//            prev_node->right=temp;
//        else
//            prev_node->left=temp;
//    }
//}

int main(){
    int x;
    for(int i=1; i<=7; i++){
        cin>>x;
        perfectTreeBuild(x);
    }

    inorder(root);
}

//12 6 9 18 4 10 5 16 49 31 43
