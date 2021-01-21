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

// Reverse a linked list
// Using auxiliary array
void reverse_linked_list(Node* f)
{
    Node *p=first;
    int A[4];
    int i=0;
    while(p)
    {
        A[i]=p->data;
        p=p->next;
        i++;
    }
    p=first;
    i--;
    while(p)
    {
        p->data=A[i];
        p=p->next;
        i--;
    }
}

// Reverse using Sliding pointers p,q,r

void reverse_linked_list_second(Node *f)
{
    Node *p = first;
    Node *q = NULL;
    Node *r = NULL;
    while(p)
    {
        r=q;
        q=p;
        p=p->next;

        q->next=r;
    }
    first=q;
}

// Reverse linked list using recursion

void reverse_linked_list_third(Node *q, Node *p)
{
    if(p)
    {
        reverse_linked_list_third(p,p->next);
        p->next=q;
    }
    else
    {
        first=q;
    }
}

int main()
{
   int A[]={2,4,6,8};

   create(A,4);
   display(first);
   cout<<"\n";
   reverse_linked_list(first);
   cout<<"\n";
   display(first);
   reverse_linked_list_second(first);
   cout<<"\n";
   display(first);
   reverse_linked_list_third(NULL, first);
   display(first);








    return 0;
}

