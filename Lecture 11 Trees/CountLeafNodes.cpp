int getLeafNodeCount(TreeNode<int>* root) {
    // Write your code here
    if(root->children.empty()) {
        return 1;
    }
    
    int ans=0;
    for(int i=0; i<root->children.size(); i++) {
        ans+=getLeafNodeCount(root->children[i]);
    }
    return ans;
}