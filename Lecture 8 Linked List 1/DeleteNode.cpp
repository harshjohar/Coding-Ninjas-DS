
Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    if(head==NULL) {
        return head;
    }
    if(pos==0) {
        Node* tmp = head->next;
        delete head;
        head = tmp;
        return head;
    }
    int i=0;
    Node* temp = head;
    while(i<pos-1 and temp->next!=NULL) {
        i++;
        temp=temp->next;
    }
    if(i!=pos-1) {
        return head;
    }
    Node* tmp2 = NULL;
    if(temp->next!=NULL)
    	tmp2 = temp->next->next;
    delete temp->next;
    temp->next=tmp2;
    
    return head;
}