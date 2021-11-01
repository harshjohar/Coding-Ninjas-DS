Node *midPoint(Node *head)
{
    // Write your code here
    Node* slow=head;
    Node* fast=head;
    
    while(fast!=NULL and fast->next!=NULL) {
        if(fast->next->next!=NULL)
        	slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}