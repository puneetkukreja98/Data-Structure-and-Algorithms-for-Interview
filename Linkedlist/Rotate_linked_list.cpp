Node* rotate(Node* head, int k)
{
   Node *temp = head;
   while(temp->next!=NULL)
   {
       temp=temp->next;
   }

   temp->next=head;
   Node*end;
   while(k--)
   {
       end=head;
       head=head->next;
   }
   end->next=NULL;
   return head;
}
