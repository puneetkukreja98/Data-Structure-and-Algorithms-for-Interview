#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
  Node* first=new Node;

void create(int A[], int n)
{
    int i;
    struct Node *t,*last;

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
void display(struct Node *p)
{

    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}




int main()
{
   int A[]={3,5,7,10,15};

   create(A,5);
   display(first);


    return 0;
}
