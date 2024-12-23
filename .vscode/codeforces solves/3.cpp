#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data ;
    node *next;
    node *prev;

};
node *root=NULL;
node *tail=NULL;
void printing1()
{
    node *curr_node = root;
    while(true)
    {
        cout<<curr_node->data<<"\n";
        curr_node= curr_node->next;
        if(curr_node==NULL)
            break;
    }
}

void insert_last(int val){
node *temp;
temp=new node();
temp->data=val;
temp->next=NULL;
temp->prev=NULL;
if(root==NULL)
    root=temp;
if(tail==NULL){
    tail=temp;}
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }

}

void insert_first(int val){
node *temp;
temp=new node();
temp->data=val;
temp->next=NULL;
temp->prev=NULL;
if(root==NULL)
    root=temp;
if(tail==NULL){
    tail=temp;}
    else{
        temp->next=root;
        root->prev=temp;
        root=temp;
    }

}
void dellast()
{
    tail=tail->prev;
    tail->next=NULL;
}
void delfirst()
{
    root=root->next;
    root->prev=NULL;
}
void insert_anywhere(int v, int pos)
{
    node *curr_node = root;
    node *temp;
    temp = (struct node*)malloc(sizeof(node));
    temp->data = v;
    temp->next = NULL;

    if (pos == 0)
    {
        temp->next = root;
        root = temp;
        return;
    }

    for (int i = 0; i < pos - 1 && curr_node != NULL; i++)
    {
        curr_node = curr_node->next;
    }

    if (curr_node == NULL)
    {
        cout << "Position out of bounds." << endl;
        return;
    }

    temp->next = curr_node->next;
    curr_node->next = temp;
}
//6.delete-anywhere
void delete_anywhere(int pos)
{
    node *curr_node = root;
    node *prev_node = NULL;

    if (pos == 0 && root != NULL)
    {
        root = curr_node->next;
        free(curr_node);
        return;
    }

    for (int i = 0; i < pos && curr_node != NULL; i++)
    {
        prev_node = curr_node;
        curr_node = curr_node->next;
    }

    if (curr_node == NULL)
    {
        cout << "Position out of bounds." << endl;
        return;
    }

    prev_node->next = curr_node->next;
    free(curr_node);
}
int main()
{
    insert_last(10);
     insert_last(15);
      insert_last(20);
       insert_last(25);
        insert_last(30);

        insert_last(35);
        printing1();
        insert_first(100);
        printing1();
        dellast();
        insert_first(200);
        printing1();
        dellast();
        delfirst();
        insert_first(300);
        printing1();
        dellast();
        delfirst();
        insert_anywhere(1,1);
        printing1();
        delete_anywhere(1);
        printing1();


}
