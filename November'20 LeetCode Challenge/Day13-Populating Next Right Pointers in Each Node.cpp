/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        if(root==NULL) return NULL;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            Node* n = q.front();
            q.pop();
            
            if(n->left!=NULL){
                n->left->next = n->right;
                q.push(n->left);
            }
            
            if(n->right){
                if(n->next){
                    n->right->next = n->next->left;
                }
                q.push(n->right);
            }
        }
        
        return root;
    }
};
