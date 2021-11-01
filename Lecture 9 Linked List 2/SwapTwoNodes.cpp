Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
    Node* temp = head;
 	int smol = (i<j) ? i : j;
    int bigg = (i>j) ? i : j;

    int idx = 0;
    Node* first=NULL;
    Node* second=NULL;
    while(temp!=NULL) {
        if(idx==smol) {
            first=new Node(temp->data);
        }
        if(idx==bigg) {
            second=new Node(temp->data);
        }
        idx++;
        temp=temp->next;
    }
}