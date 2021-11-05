void nextLarger(TreeNode<int>* root, int x, TreeNode<int>** ans) {
    if(root==NULL) {
        return;
    }
    
    if(root->data > x) {
        if(!(*ans) || (*ans)->data > root->data) {
            *ans = root;
        }
    }
	
    for(int i=0; i<root->children.size(); i++) {
        nextLarger(root->children[i], x, ans);
    }
    
    return;
}


TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    TreeNode<int>* ans = NULL;
    nextLarger(root, x, &ans);
    return ans;
}