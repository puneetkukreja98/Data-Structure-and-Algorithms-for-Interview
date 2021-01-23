#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *first=NULL;
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

// Display linked list
void display(Node *p)
{

    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
Node* merge_sorted_list(Node *f, Node *s)
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
void mergeSort(Node* head) {

    Node *low=head;
    Node *mid;
    Node *high=NULL;

    Node *slow=head;
    Node *fast=head;
    Node *cc=head;
    Node *slow_back;
    int c=0;
    while(cc)
    {
        c++;
        cc=cc->next;
    }

     if(head)

    {
      while(fast!=NULL && fast->next!=NULL)
      {
          fast=fast->next->next;
          slow_back=slow;
          slow=slow->next;
      }
    }
    if(c%2==0)
    {
        mid=slow_back;
    }
    else
    {
       mid=slow;
    }

   Node *p=head;
   while(p->next)
   {
       p=p->next;
   }
   high=p;



    /*cout<<low->data<<"\n";
    cout<<mid->data<<"\n";
    cout<<high->data<<"\n";*/


    Node *fff=low;
    Node *secc=mid->next;
    mid->next=NULL;


   /* while(fff)
    {
        cout<<fff->data<<" ";
        fff=fff->next;
    }
    cout<<"\n";
    while(secc)
    {
        cout<<secc->data<<" ";
        secc=secc->next;
    }*/

    merge_sorted_list(fff, secc);











}
int main()
{
   int A[]={2,5,8,12,3,6,7,10};
   //int A[]={1,2,3,4,5};

   create(A,8);
   mergeSort(first);
   display(third);






    return 0;
}

