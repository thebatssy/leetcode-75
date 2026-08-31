// Problem link: https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/?envType=study-plan-v2&envId=leetcode-75

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
    int maxLevelSum(TreeNode* root) {
        int maxSum = INT_MIN, maxSumLvl = 0, currLvl = 0;

        queue<TreeNode*> q;
        q.push(root);
    
        while (!q.empty()){
            int sz = q.size();
            int currSum = 0;
            currLvl++;
            
            for (int i = 0; i < sz; i++){
                auto curr = q.front();
                q.pop();

                currSum += curr->val;

                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }

            if (currSum > maxSum){
                maxSum = currSum;
                maxSumLvl = currLvl;
            }
        }
        return maxSumLvl;
    }
};