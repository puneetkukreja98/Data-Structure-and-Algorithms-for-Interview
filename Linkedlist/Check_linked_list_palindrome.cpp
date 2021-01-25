Node* reverse(Node* head )
{
    Node *pre=NULL;
    Node *next=NULL;

    while(head)
    {
        next=head->next;
        head->next=pre;
        pre=head;
        head=next;
    }
    return pre;
}
bool isPalindrome(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return true;
    }
    Node *slow=head;
    Node *fast=head;
    while(fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=reverse(slow->next);
    slow=slow->next;

    while(slow!=NULL)
    {
        if(head->data!=slow->data)
        {
            return false;
        }
        head=head->next;
        slow=slow->next;
    }
     return true;







}
