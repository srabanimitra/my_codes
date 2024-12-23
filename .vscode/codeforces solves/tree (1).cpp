#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *root= NULL;
void bst_insert(int value)
{
    node *curr_node= NULL;
    node *prev_node= NULL;
    node *temp=new node();
    temp->data=value;
    temp->right=NULL;
    temp->left=NULL;
    if(root==NULL)
    {
        root=temp;

    }
    else
    {
        curr_node=root;
        prev_node=root;

        while(curr_node!=NULL)
        {
            prev_node=curr_node;
            if(curr_node->data < value)
            {
                curr_node=curr_node->right;
            }
            else
            {
                curr_node=curr_node->left;
            }
        }
        if(prev_node->data < value)
        {
            prev_node->right=temp;
        }
        else
        {
            prev_node->left=temp;
        }
    }

}
void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void postorder(node *root)
{
    if(root!=NULL)
    {
       postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";

    }
}
void preorder(node *root)
{
    if(root!=NULL)
    {
         cout<<root->data<<" ";
       postorder(root->left);
        postorder(root->right);


    }
}
void minimum(node *root)
{
    node *temp=root;
   // temp->data=val;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    cout<<temp->data;
}
void maximum(node *root)
{
    node *temp=root;
   // temp->data=val;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    cout<<temp->data;
}
int main()
{
    int x;
    for(int i=1; i<=11; i++)
    {
        cin>>x;
        bst_insert(x);
    }
    cout<<"Inoder="<<" ";
    inorder(root);
    cout<<endl;
    cout<<"postoder="<<" ";
    postorder(root);
    cout<<endl;
    cout<<"Preoder="<<" ";
    preorder(root);
    cout<<endl;
    minimum(root);
    cout<<endl;
    maximum(root);
}

//12 6 9 18 4 10 5 16 49 31 43
