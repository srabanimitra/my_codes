#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};

node *root = NULL;
node *tail = NULL;

void printing()
{
    node *curr_node = root;

    if (curr_node == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }

    do
    {
        cout << curr_node->data << " ";
        curr_node = curr_node->next;
    } while (curr_node != root);
    cout << endl;
}

void searching(int val)
{
    node *curr_node = root;
    int f = 0;

    if (curr_node == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }

    do
    {
        if (curr_node->data == val)
        {
            cout << "found" << endl;
            f = 1;
            break;
        }
        curr_node = curr_node->next;
    } while (curr_node != root);

    if (f == 0)
        cout << "not found" << endl;
}

int listsize()
{
    node *curr_node = root;
    int c = 0;

    if (curr_node == NULL)
        return 0;

    do
    {
        curr_node = curr_node->next;
        c++;
    } while (curr_node != root);

    return c;
}

void printlast()
{
    if (tail != NULL)
        cout << tail->data << endl;
    else
        cout << "Empty List" << endl;
}

void printprev_last()
{
    if (tail != NULL && tail->prev != NULL)
        cout << tail->prev->data << endl;
    else
        cout << "Empty List" << endl;
}

void insert_last(int val)
{
    node *temp = new node();
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (root == NULL)
    {
        root = temp;
        tail = temp;
        root->next = root;
        root->prev = root;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        temp->next = root;
        root->prev = temp;
        tail = temp;
    }
}

void insert_first(int val)
{
    node *temp = new node();
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (root == NULL)
    {
        root = temp;
        tail = temp;
        root->next = root;
        root->prev = root;
    }
    else
    {
        temp->next = root;
        root->prev = temp;
        root = temp;
        tail->next = root;
        root->prev = tail;
    }
}

void del_last()
{
    if (tail != NULL)
    {
        tail = tail->prev;
        tail->next = root;
        root->prev = tail;
    }
    else
    {
        cout << "Empty List" << endl;
    }
}

void del_first()
{
    if (root != NULL)
    {
        root = root->next;
        root->prev = tail;
        tail->next = root;
    }
    else
    {
        cout << "Empty List" << endl;
    }
}

void delete_first()
{
    if (root != NULL)
    {
        if (root == tail)
        {
            delete root;
            root = NULL;
            tail = NULL;
        }
        else
        {
            node *temp = root;
            root = root->next;
            root->prev = tail;
            tail->next = root;
            delete temp;
        }
    }
    else
    {
        cout << "Empty List" << endl;
    }
}
void insert_anywhere(int val, int pos)
{
    node *curr_node = root;
    node *temp = new node();
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (pos == 0)
    {
        temp->next = root;
        root->prev = temp;
        root = temp;
        tail->next = root;
        root->prev = tail;
    }
    else
    {
        for (int i = 0; i < pos - 1 && curr_node != root; i++)
        {
            curr_node = curr_node->next;
        }

        if (curr_node == root)
        {
            cout << "Position out of bounds." << endl;
            return;
        }

        temp->next = curr_node->next;
        temp->prev = curr_node;
        curr_node->next->prev = temp;
        curr_node->next = temp;
    }
}

void delete_anywhere(int pos)
{
    node *curr_node = root;
    node *prev_node = NULL;

    if (root == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }

    if (pos == 0)
    {
        root = curr_node->next;
        root->prev = tail;
        tail->next = root;
        free(curr_node);
        return;
    }

    for (int i = 0; i < pos && curr_node != root; i++)
    {
        prev_node = curr_node;
        curr_node = curr_node->next;
    }

    if (curr_node == root)
    {
        cout << "Position out of bounds." << endl;
        return;
    }

    prev_node->next = curr_node->next;
    curr_node->next->prev = prev_node;
    free(curr_node);
}

int main()
{
    insert_last(10);
    insert_last(15);
    insert_last(20);
    insert_last(25);
    insert_last(30);

    printing();
    cout << endl;

    searching(20);

    int res = listsize();
    cout << res << endl;

    printlast();
    printprev_last();

    insert_first(100);

    printing();
    cout << endl;

    del_last();

    printing();
    cout << endl;
delete_first();
    insert_anywhere(1, 1);
    printing();
    cout << endl;

    delete_anywhere(1);
    printing();
    cout << endl;

    return 0;
}
