// Problem link: https://leetcode.com/problems/find-pivot-index/submissions/1816784198/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        vector<int> preSum(n, 0);
        
        preSum[0] = arr[0];
        for (int i = 1; i < n; i++){
            preSum[i] = preSum[i-1] + arr[i];
        }
        
        for (int i = 0; i < n; i++){
            int lSum = (i == 0) ? 0 : preSum[i-1];
            int rSum = (i == n-1) ? 0 : preSum[n-1] - preSum[i];
            if (lSum == rSum) return i;
        }
        return -1;
    }
};