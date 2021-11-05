bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here
    if(root->data==x) {
        return true;
    }
    bool ans = false;
    for(int i=0; i<root->children.size(); i++) {
        ans = ans || isPresent(root->children[i], x);
    }
    return ans;
}