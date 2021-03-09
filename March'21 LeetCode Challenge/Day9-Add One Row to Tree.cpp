class Solution {
public:
    void dfs(TreeNode* root, int i) {
        if (!root) return;
        if (i == depth-1) {
            root->left = new TreeNode(value, root->left, NULL);
            root->right = new TreeNode(value, NULL, root->right);
            return;
        }
        dfs(root->left, i + 1);
        dfs(root->right, i + 1);
    }
    
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if (d == 1) {
            root = new TreeNode(v, root, NULL);
        }
        
        else {
            depth = d;
            value = v;
            dfs(root, 1);
        }
        return root;
    }
    
private:
    int depth;
    int value;
};
