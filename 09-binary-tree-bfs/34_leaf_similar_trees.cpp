// Problem link: https://leetcode.com/problems/leaf-similar-trees/submissions/?envType=study-plan-v2&envId=leetcode-75

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
public: // 6 7 4 9 8
    void inOrder(TreeNode* root, vector<int>& arr){
        if (!root) return;

        inOrder(root->left, arr);
        if (!root->left && !root->right){
            arr.push_back(root->val);
            return;
        }
        inOrder(root->right, arr);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1, arr2;
        inOrder(root1, arr1);
        inOrder(root2, arr2);

        if (arr1.size() != arr2.size()) return false;
        for (int i = 0; i < arr1.size(); i++){
            if (arr1[i] != arr2[i]) return false;
        }
        return true;
    }
};