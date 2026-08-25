// Problem link: https://leetcode.com/problems/path-sum-iii/description/?envType=study-plan-v2&envId=leetcode-75

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
    int count = 0;
    unordered_map<long long, int> mp; //currsum, freq 

    void helper(TreeNode* root, long long currSum, int targetSum) {
        if (!root) return;

        currSum += root->val;

        if (mp.find(currSum - targetSum) != mp.end()) {
            count += mp[currSum - targetSum];
        }

        mp[currSum]++;

        helper(root->left, currSum, targetSum);
        helper(root->right, currSum, targetSum);

        mp[currSum]--;
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        mp[0] = 1; 
        helper(root, 0, targetSum);
        return count;
    }
};