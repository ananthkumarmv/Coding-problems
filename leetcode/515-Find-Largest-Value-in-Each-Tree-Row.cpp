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
    vector<int> largestValues(TreeNode* root) {

        if(!root)
            return {};

        queue<TreeNode*> q;

        vector<int> res;

        q.push(root);

        while(!q.empty()){
            int n = q.size();

            int maxi = INT_MIN;

            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();

                if(maxi<node->val)
                    maxi = node->val;

                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }

            res.push_back(maxi);
        }

        return res;
        
    }
};