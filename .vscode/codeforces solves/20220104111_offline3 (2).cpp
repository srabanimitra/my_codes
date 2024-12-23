
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data ;
    node *next;

};
node *root=NULL;
//1)insert first
void insertfirst(int val)
{
    node *temp;
    temp=(struct node*)malloc(sizeof(node));
    temp->data = val;
    temp->next = root;
    root = temp;
}
//2.insert at last
void insertlast(int val)
{
    node *curr_node=root;
    node *temp;
    temp = (struct node*)malloc (sizeof(node));
    temp->data = val;
    temp->next =NULL;
    if(curr_node == NULL)
        root=temp;
    else
    {
        while(curr_node->next!=NULL)
        {
            curr_node = curr_node->next;


        }
        curr_node->next = temp;
    }

}
//(3) insert-anywhere()

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

//(4) delete first
void delfirst()
{
    node *curr_node = root;
    if(curr_node != NULL)
        root= curr_node->next;
}
//5 delete last
void dellast()
{
    node *curr_node= root;
    node *prev_node= NULL;
    while(curr_node!=NULL)
    {
        if(curr_node->next == NULL)
            break;
        else
        {
            prev_node= curr_node;
            curr_node=curr_node->next;
        }

    }


    prev_node->next=NULL;

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


//7 printing
void printing()
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

//(8) searching()
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
//(9) last-node
void printlast()
{
    node *curr_node= root;
    while(curr_node!= NULL)
    {
        if(curr_node->next == NULL)
            break;
        else
            curr_node = curr_node->next;
    }
    cout<< curr_node->data<<"\n";
}
//(10) previous-of-last-node
void printsecondlast()
{
    node *curr_node= root;
    node *prev_node= NULL;
    while(curr_node!=NULL)
    {
        if(curr_node->next == NULL)
            break;
        else
        {
            prev_node= curr_node;
            curr_node=curr_node->next;
        }

    }


    cout<< prev_node->data<<"\n";

}
//11.list_size() -> function to print the size of the linked list
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
//(12) main function
int main()
{
    node *p,*q,*r,*s;
    p=(struct node*)malloc(sizeof(node));
    q=(struct node*)malloc(sizeof(node));
    r=(struct node*)malloc(sizeof(node));
    s=(struct node*)malloc(sizeof(node));
    p->data = 10;
    q->data = 20;
    r->data = 25;
    s->data = 30;

    root = p;

    p ->next = q;
    q ->next = r;
    r ->next = s;
    s ->next = NULL;
    cout<< p->data<<"\n";
    cout<< p->next->data<<"\n";
    cout<< p->next->next->data<<"\n";
    cout<< p->next->next->next->data<<"\n";


    printlast();
    printsecondlast();

    int val;
    cin>>val;
    searching(val);
    insertfirst(10);
    printing();
    insertfirst(15);
    printing();
    insertfirst(20);
    printing();

    printlast();
    delfirst();
    printing();
    delfirst();
    printing();
    delfirst();

    printing();
    insertlast(10);
    printing();
    insertlast(15);
    printing();
    insertlast(20);
    printing();
    dellast();
    printing();
    dellast();
    printing();
    dellast();
    printing();
    int result=size();
    cout<<result<<endl;
    int v,pos;
    cout<<"printing delete/insert anywhere"<<endl;
    insert_anywhere(25, 2);
    printing();
    insert_anywhere(35, 1);
    printing();

    delete_anywhere(2);
    printing();
    delete_anywhere(0);
    printing();
}

