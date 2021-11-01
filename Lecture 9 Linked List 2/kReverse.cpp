Node *kReverse(Node *head, int k)
{
	//Write your code here
    if(!head) {
        return head;
    }
    if(k==0) {
        return head;
    }
    Node* curr =head;
    Node* prev=NULL;
    Node* next=NULL;
    int count=0;
    
    while(curr!=NULL and count<k) {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL) {
        head->next=kReverse(next, k);
    }
    return prev;
}