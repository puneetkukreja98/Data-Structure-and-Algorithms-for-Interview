// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    Node *fast = head;
    Node *slow = head;
    Node *tail=NULL;
    if(head)
    {
        while(fast!=NULL && fast->next!=NULL)
        {
           fast=fast->next->next;
           tail=slow;
           slow=slow->next;

        }
    }
    tail->next=slow->next;
    delete slow;

    return head;
}
