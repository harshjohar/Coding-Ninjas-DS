Node *reverseLinkedListRec(Node *head)
{
    //Write your code here
    if(head==NULL) {
        return head;
    }
    if(head->next==NULL) {
        return head;
    }
    Node* temp = reverseLinkedListRec(head->next);
    Node* tmp=temp;
    while(tmp->next) {
        tmp=tmp->next;
    }
    tmp->next=head;
    head->next=NULL;
    return temp;
}