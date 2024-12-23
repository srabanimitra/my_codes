#include <bits/stdc++.h>

using namespace std;

using ll=long long;

struct node

{

    int data;

    node *next;

    node *prev;

};

node *root=NULL;

node *tail=NULL;

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

void printingfor()

{

   node *curr_node=root;//root ke point korease

   while(true)

   {

     cout<<curr_node->data<<" ";

     curr_node=curr_node->next;

       if(curr_node==NULL)// null na howa porjonto iterate krbe

         break;

 }

}

void searching(int val)

{

   node *curr_node=tail;//root ke point korease

   int f=0;

   while(curr_node!=NULL)

   {

     if(curr_node->data==val)

     {

         cout<<"found"<<"\n";

         f=1;

         break;

     }



     curr_node=curr_node->prev;

 }

   if(f==0)// null na howa porjonto iterate krbe

     cout<<"not found"<<"\n";



}

//listsize

int listsize()

{

 node *curr_node=root;

 int c=0;

 while(curr_node!=NULL)

 {



     curr_node=curr_node->next;

     c++;

 }

 return c;

}

//printlast

void printlast()

{

 cout<<tail->data<<endl;

}

//prev_last

void printprev_last()

{

 cout<<tail->prev->data<<endl;

}

//insert_last

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

        void  del_last()

        {

            tail=tail->prev;

            tail->next=NULL;

        }

        void del_first()

        {

            root=root->next;

            root->prev=NULL;

        }

//del_anywhere




//insertanywhere

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

   node *p,*q,*r,*s,*temp;// node type er var er address r ghor create kora jabe eibhabe

   p=new node();

   q=new node();

   r=new node();

   s=new node();

   temp=new node();

   p->data=10;

   q->data=15;

   r->data=20;

   s->data=25;

   temp->data=30;

   p->next=q;

   q->next=r;

   r->next=s;

   s->next=temp;

   temp->next=NULL;

   p->prev=NULL;

   q->prev=p;

   r->prev=q;

   s->prev=r;

   temp->prev=s;

   root=p;

   tail=temp;

   printing();

   cout<<"\n";

   printingfor();

   searching(20);//akdik diye khujleihoi as samne and piche same data e ase

   int res=listsize();

   cout<<res<<"\n";

   printlast();

   printprev_last();



   return 0;

   insert_last(10);

   insert_last(15);

   insert_last(20);

   insert_last(25);

   insert_last(30);

   printing();

   cout<<"\n";

 //  printingfor();

   cout<<"\n";

   insert_first(100);

   //insert_first(200);

   //insert_first(300);

   //insert_first(400);

   cout<<"\n";

   printing();

   cout<<"\n";

   //  printingfor();

   del_last();



   cout<<"\n";

   printing();



   cout<<"\n";

   //printing();

//     del_anywhere(0);

//    printing();

//    cout<<"\n";

   insert_anywhere(1,1);

   printing();

   cout<<"\n";

   delete_anywhere(1);

   printing();

   insert_last(10);

   insert_last(15);

   insert_last(20);

   insert_last(25);

   insert_last(30);

   cout<<"\n";

   insert_last(35);

   printing();

   cout<<"\n";

   insert_first(100);

   printing();

   cout<<"\n";

   del_last();

   insert_first(200);

   printing();

   cout<<"\n";

   del_last();

   del_first();

   insert_first(300);

   printing();

   cout<<"\n";

   del_last();

   del_first();

   insert_anywhere(1,1);

   printing();

   cout<<"\n";

   delete_anywhere(1);

   printing();

   cout<<"\n";


}

