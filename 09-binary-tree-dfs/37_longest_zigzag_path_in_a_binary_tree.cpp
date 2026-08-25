// Problem link: https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/description/?envType=study-plan-v2&envId=leetcode-75

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
    int helper(TreeNode* root, bool goingLeft, int currLen){
        if (!root) return 0;
        int left = 0, right = 0;

        if (goingLeft){
            left = helper(root->left, false, currLen+1);
            right = helper(root->right, true, 1);
        }
        else{
            right = helper(root->right, true, currLen+1);
            left = helper(root->left, false, 1);
        } 

        return max({currLen, left, right});
    }

    int longestZigZag(TreeNode* root) {
        int left = helper(root, true, 0);
        int right = helper(root, false, 0);

        return max(left, right);
    }
};