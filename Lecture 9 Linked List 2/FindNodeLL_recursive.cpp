int findNodeRec(Node *head, int n)
{
	//Write your code here
    if(head==NULL) {
        return -1;
    }
    if(head->data==n) {
        return 0;
    }
    
    int x = findNodeRec(head->next, n);
    if(x==-1)
        return x;
    return 1 + x;
}