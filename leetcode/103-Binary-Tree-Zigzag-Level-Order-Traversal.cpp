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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if(root == NULL)
            return {};

        queue<TreeNode*> q;
        q.push(root);

        vector<vector<int>> res;

        bool leftToRight = true;

        while(!q.empty()){
            int n = q.size();
            vector<int> v(n);

            for(int i=0; i<n; i++){

                TreeNode* node = q.front();
                q.pop();
                int index = leftToRight ? i : (n-i-1);
                v[index] = node->val;

                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }

            leftToRight = !leftToRight;
            res.push_back(v);
        }

        return res;
        
    }
};
