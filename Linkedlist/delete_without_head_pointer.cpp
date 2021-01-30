// You are give a reference to only node which hast to be deleted

void delete_node(Node *ptr)
{
    Node *temp=ptr->next;
    ptr->data=temp->data;
    ptr->next=temp->next;
    delete(temp);
}
