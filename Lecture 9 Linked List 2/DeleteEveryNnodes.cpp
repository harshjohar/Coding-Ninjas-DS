Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    Node* temp=head, *t;
    int count;
    
    if(M==0) {
        return NULL;
    }
    if(N==0) {
        return head;
    }
    
    while(temp) {
        for(count=1; count<M && temp!=NULL; count++) {
            temp=temp->next;
        }
        if(temp==NULL) {
            return head;
        }
        t = temp->next;
        for(count=1; count<=N && t!=NULL; count++) {
            Node* tmp = t;
            t = t->next;
            delete tmp;
        }
        temp->next=t;
        temp=t;
    }
    return head;
}