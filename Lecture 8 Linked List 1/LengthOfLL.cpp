int length(Node *head)
{
    //Write your code here
    int ans=1;
    if(head==NULL) {
        return 0;
    }
    while(head->next!=NULL) {
        ans++;
        head=head->next;
    } 
    return ans;
}
