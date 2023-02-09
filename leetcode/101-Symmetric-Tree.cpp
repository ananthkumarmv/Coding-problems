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

// BFS Solution

class Solution {
    public:
        bool isSymmetric(TreeNode* root){


            queue<pair<TreeNode*, TreeNode*>> q;
            q.push({root->left, root->right});

            while(!q.empty()){

                TreeNode* n1 = q.front().first;
                TreeNode* n2 = q.front().second;

                q.pop();

                if(!n1 && !n2)
                    continue;
                
                if(!n1 || !n2 || n1->val != n2->val)
                    return false;

                q.push({n1->left, n2->right});
                q.push({n1->right, n2->left});

            }

            return true;

        }
};


// Recursive Solution

/*
class Solution {
public:

    bool isSymmetricTest(TreeNode* p, TreeNode* q){
        if(!p && !q)
            return true;

        if(!p || !q || p->val != q->val)
            return false;

        return isSymmetricTest(p->left, q->right) && isSymmetricTest(p->right, q->left);

    }

    bool isSymmetric(TreeNode* root) {

        if(!root)
            return true;

        return isSymmetricTest(root->left, root->right);
        
    }
};
*/