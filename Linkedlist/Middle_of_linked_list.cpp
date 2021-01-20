// Method using counting nodes
int getMiddle(Node *head)
{
   int c=0;
   int r;
   Node *t=head;

   while(head)
   {
       c++;
       head=head->next;
   }
   if(c%2==0)
   {
      r=c/2;
      //r=r+1;
      for(int i=0; i<r; i++)
      {
          t=t->next;
      }
      return t->data;
   }
   else
   {
       r=c/2;
       //r=r+1;
       for(int i=0; i<r; i++)
       {
           t=t->next;
       }
       return t->data;
   }
}

// Another method using two pointers using slow and fast pointer
int getMiddle(Node *head)
{
  Node *slow;
  Node *fast;
  slow=head;
  fast=head;
  if(head)
  {
      while(fast!=NULL && fast->next!=NULL)
      {
          fast=fast->next->next;
          slow=slow->next;
      }
  }
  return slow->data;
}

