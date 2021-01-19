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




int main()
{
   int A[]={15,14,13,12,11,10};

   create(A,6);
   display(first);
   cout<<"\n";



    return 0;
}
