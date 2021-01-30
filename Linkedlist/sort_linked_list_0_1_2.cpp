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

Node* segregate(Node *head) {

  Node *p=head;
  int count0=0;
  int count1=0;
  int count2=0;
  int c=0;

  while(p)
  {
      if(p->data==0)
      {
          count0++;
          p=p->next;
      }
      else if(p->data==1)
      {
          count1++;
          p=p->next;
      }
      else if(p->data==2)
      {
          count2++;
          p=p->next;
      }
  }

  Node *h;
  Node *curr;
  while(count0--)
  {
      Node *temp=new Node;
      temp->data=0;
      c++;
      if(c==1)
      {
          h=temp;
          curr=temp;
      }
      else
      {
          curr->next=temp;
          curr=temp;
      }


  }
  Node *h1;
  Node *curr1;
  int c1=0;
  while(count1--)
  {
      Node *temp=new Node;
      temp->data=1;
      c1++;
      if(c1==1)
      {
          h1=temp;
          curr1=temp;
      }
      else
      {
          curr1->next=temp;
          curr1=temp;
      }

  }
  Node *h2;
  Node *curr2;
  int c2=0;
  while(count2--)
  {
      Node *temp=new Node;
      temp->data=2;
      c2++;
      if(c2==1)
      {
          h2=temp;
          curr2=temp;
      }
      else
      {
          curr2->next=temp;
          curr2=temp;
      }
  }
  curr->next=h1;
  curr1->next=h2;
  curr2->next=NULL;

  Node * p2=h;
  while(p2)
  {

      cout<<p2->data<<" ";
      p2=p2->next;
  }

}

int main()
{
   int A[]={0,2,1,1,0,2};

   create(A,5);
   display(first);
   cout<<"\n";
   segregate(first);





    return 0;
}
