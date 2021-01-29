/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    map<int,set<pair<int,int>>> m;
    
    void dfs(TreeNode* root,int h_level,int v_level){
        
        if(!root) return;
        m[h_level].insert({v_level,root->val});
        dfs(root->left,h_level-1,v_level+1);
        dfs(root->right,h_level+1,v_level+1);
        return;
        
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root,0,0);
        vector<vector<int>> v;
        
        for(auto x:m){
            vector<int> c;
            for(auto i:x.second)
                c.push_back(i.second);
            v.push_back(c);
        }
        
        return v;
    }
};
