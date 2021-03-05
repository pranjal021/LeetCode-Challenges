class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            long tmp = 0;
            int s = q.size();
            for(int i=0;i<s;i++){
                auto n = q.front();
                q.pop();
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
                tmp += n->val;
            }
            
            ans.push_back((double)tmp/s);
        }
        
        return ans;
    }
};
