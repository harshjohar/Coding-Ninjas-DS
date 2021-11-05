int getLargeNodeCount(TreeNode<int>* root, int x) {
    // Write your code here
    if(root==NULL) {
        return 0;
    }
    int ans=0;
    for(int i=0; i<root->children.size(); i++) {
        ans+=getLargeNodeCount(root->children[i], x);
    }
    if(root->data > x) {
        ans+=1;
    }
    return ans;
}