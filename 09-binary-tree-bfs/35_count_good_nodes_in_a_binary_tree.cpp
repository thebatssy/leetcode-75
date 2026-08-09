// Problem link: https://leetcode.com/problems/count-good-nodes-in-binary-tree/?envType=study-plan-v2&envId=leetcode-75

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
    int cnt = 0;
    void preOrder(TreeNode* root, int currMax){
        if (!root) return;

        if (root->val >= currMax){
            cnt++;
            currMax = root->val;
        } 
        preOrder(root->left, currMax);
        preOrder(root->right, currMax);
    }

    int goodNodes(TreeNode* root) {
        preOrder(root, root->val);
        return cnt;
    }
};