Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    if(head==NULL) {
        return head;
    }
    if(n==0) {
        return head;
    }
    int len=1;
    Node* front = head;
    Node* temp = head;
    while(temp->next!=NULL) {
        temp=temp->next;
        len++;
    }
    temp->next=front;
    int i=0;
	int e = len-n;
    while(i<e-1) {
        i++;
        front=front->next;
    }
    head=front->next;
    front->next=NULL;
    return head;
}