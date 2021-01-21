#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *first=NULL;
Node *second=NULL;
Node *third=NULL;
Node *last=NULL;

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
void create_two(int B[], int n)
{
    int i;
    Node *t;
    Node *last;
    second = new Node;

    second->data=B[0];
    second->next=NULL;
    last=second;
    for(i=1; i<n; i++)
    {
        t=new Node;
        t->data=B[i];
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

// Merge to sorted linked list
void merge_sorted_list(Node *f, Node *s)
{
    if(f->data<s->data)
    {
        last=third=f;
        f=f->next;
        last->next=NULL;
    }
    else
    {
        last=third=s;
        s=s->next;
        last->next=NULL;
    }

    while(f && s)
    {
        if(f->data<s->data)
        {
            last->next=f;
            last=f;
            f=f->next;
            last->next=NULL;
        }
        else
        {
            last->next=s;
            last=s;
            s=s->next;
            last->next=NULL;
        }
    }
    if(f)
        last->next=f;
    else
        last->next=s;
}



int main()
{



    int A[]={10,12,14,15,16};
    int B[]={11,13,17,18,19};

   create(A,5);
   create_two(B,5);
   display(first);
   cout<<"\n";
   display(second);
   cout<<"\n";
   merge_sorted_list(first,second);
   display(third);
   cout<<"\n";

    return 0;
}
