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
 
 // DFS
class Solution {
public:
    int maxDepth(TreeNode* root) {

        if(root == NULL)
            return 0;

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        return max(left, right) + 1;
        
    }
};

// BFS

/*
class Solution {
public:
    int maxDepth(TreeNode* root) {

        if(root == NULL)
            return 0;

        queue<TreeNode*> q;

        q.push(root);
        int depth = 0;

        while(!q.empty()){
            int n = q.size();
            depth++;

            for(int i=0; i<n; i++){
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }

        return depth;
        
    }
};
*/