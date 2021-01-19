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

// Insertion in sorted linked list

void Insert_sorted(int x)
{
    Node *p=first;
    Node *q=NULL;
    Node *t;

    while(p && p->data<x)
    {
        q=p;
        p=p->next;

    }
    t=new Node;
    t->data=x;
    t->next=q->next;
    q->next=t;
}

int main()
{
   int A[]={3,7,9,15,20};

   create(A,5);
   display(first);
   cout<<"\n";
   Insert_sorted(6);
   display(first);




    return 0;
}
