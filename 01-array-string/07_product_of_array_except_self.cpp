// Problem link: https://leetcode.com/problems/product-of-array-except-self/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& vec) {
        int n = vec.size();
        vector<int> ans(n, 1);
    
        for (int i = 1; i < n; i++){
            ans[i] = ans[i-1] * vec[i-1];
        }

        int suffix = 1;
        for (int i = n-2; i >= 0; i--){
            suffix *= vec[i+1];
            ans[i] *= suffix;
        }
        return ans;   
    }
};