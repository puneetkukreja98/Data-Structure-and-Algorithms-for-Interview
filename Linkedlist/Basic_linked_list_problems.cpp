#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *first=NULL;

// Creation of linked list
void create(int A[], int n)
{
    int i;
    Node *t;
    Node *last;
    first = new Node;

    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1; i<n; i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

// Display linked list
void display(Node *p)
{

    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

// Display linked list recursive way
void display_recursive(Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        display_recursive(p->next);
    }
}

// Reverse linked list
void reverse_linked_list(Node *p)
{
    if(p)
    {
        reverse_linked_list(p->next);
        cout<<p->data<<" ";
    }
}

// Count Nodes in linked list
int count_nodes(Node *p)
{
    int c=0;
    while(p)
    {
        c++;
        p=p->next;
    }
    return c;
}

// Count Nodes in liked list using recursive way
int count_nodes_recursive(Node *p)
{

    if(p==0)
    {
        return 0;
    }
    else
    {
        return count_nodes_recursive(p->next)+1;
    }
}

// Sum of all elements of linked list
int sum(Node *p)
{
    int s=0;
    while(p)
    {
        s=s+p->data;
        p=p->next;
    }
    return s;
}

// Recursive sum of all elements in linked list
int r_sum(Node *p)
{
    if(p==0)
        return 0;
    else
        return r_sum(p->next)+p->data;
}

// Max element in linked list
int max_element_linkedlist(Node *p)
{
    int m=-1;
    while(p)
    {
        if(p->data>m)
        {
            m=p->data;
            p=p->next;
        }
        else{
            p=p->next;
        }
    }
    return m;
}

// Searching in linked list-Linear Search
Node* search_linked_list(Node *p,int key)
{
    while(p)
    {
        if(key==p->data)
            return p;
        p=p->next;

    }
    return 0;
}

// Insertion in linked list using index
void insert_index(int pos,int x)
{
    Node *t;
    Node *p;
    if(pos==0)
    {
        t=new Node;
        t->data=x;
        t->next=first;
        first=t;
    }
    else if(pos>0)
    {
        p=first;
        for(int i=0; i<pos-1; i++)
            p=p->next;
        if(p)
        {
            t=new Node;
            t->data=x;
            t->next=p->next;
            p->next=t;
        }
    }
}






int main()
{
   int A[]={3,7,9,15,20};

   create(A,5);
   display(first);
   cout<<"\n";





    return 0;
}
