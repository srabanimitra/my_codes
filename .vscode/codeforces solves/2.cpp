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
//1.backward printing
void printing()
{
    node *curr_node = tail;
    while(true)
    {
        cout<<curr_node->data<<"\n";
        curr_node= curr_node->prev;
        if(curr_node==NULL)
            break;
    }
}

//2.
void last_node()
{
    cout<<tail->data<<endl;
}
//3.
void prev_of_last_node()
{
    cout<<tail->prev->data<<endl;
}

//4.
void searching(int val)
{
    node *curr_node=root;
    int f=0;
    while(curr_node!=NULL)
    {
        if(curr_node ->data == val)
        {
            cout<<"found"<<endl;
            f=1;
            break;
        }
        curr_node=curr_node->next;
    }
    if(f==0)
        cout<<"not found"<<endl;
}
//5.
int size()
{
    node *curr_node=root;
    int count=0;
    while(curr_node != NULL)
    {
        curr_node=curr_node->next;
        count++;
    }
    return count;
}
//6=forward printing
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
//7.
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


int main()
{
    insert_last(10);
     insert_last(15);
      insert_last(20);
       insert_last(25);
        insert_last(30);

        insert_last(35);
        printing1();
}
  /*  node *p,*q,*r,*s,*temp;
    p=new node();
    q=new node();
    r=new node();
    s=new node();
    temp=new node();
    p->data = 10;
    q->data = 15;
    r->data = 20;
    s->data = 25;
    temp->data=30;
    root=p;
    p ->next = q;
    q ->next = r;
    r ->next = s;
    s ->next = temp;
    temp->next=NULL;
    root = p;
    tail=temp;
    p->prev=NULL;
    q->prev=p;
    r->prev=q;
    s->prev=r;
    temp->prev=s;
    printing();
    int val;
    cin>>val;
    searching(val);
    int result= size();
    cout<<result<<endl;
    last_node();
    prev_of_last_node();
    printing1();*/
//}

