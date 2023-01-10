
class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    int height(Node *root){
        if(!root) return 0;
        int l = height(root->left);
        int r = height(root->right);
        int val = root->data;
        root->data = l+r;
        
        return l+r+val;
    }
    
    void toSumTree(Node *root)
    {
        // Your code here
        
        int x = height(root);
    }
};