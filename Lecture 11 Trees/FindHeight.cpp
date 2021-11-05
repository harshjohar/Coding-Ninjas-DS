int getHeight(TreeNode<int>* root) {
    // Write your code here
    int ans = 0;
    
    for(int i=0; i<root->children.size(); i++) {
        int nextSize = getHeight(root->children[i]);
        ans = (ans>nextSize)?ans:nextSize;
    }
    return ans+1;
}