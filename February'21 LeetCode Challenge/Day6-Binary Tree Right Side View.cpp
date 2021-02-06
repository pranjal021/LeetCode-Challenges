class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
        if(!root) return {};
        vector<int> v;
        int d = 0;
        helper(root,1,v,d);
        return v;
        
    }
    
    void helper(TreeNode* root,int level,vector<int> &v,int &maxLevel){
        if(root == NULL) return;
        
        if(maxLevel < level){
            maxLevel = level;
            v.push_back(root->val);
        }
        
        helper(root->right,level+1,v,maxLevel);
        helper(root->left,level+1,v,maxLevel);
        return;
    }
    
};
