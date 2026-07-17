// Problem link: https://leetcode.com/problems/maximum-average-subarray-i/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0.0;

        for (int i = 0; i < k; i++) sum += nums[i];
        double maxAvg = (double)sum/k;

        for (int i = k; i < n; i++){
            sum += nums[i];
            sum -= nums[i-k];
            maxAvg = max(maxAvg, (double)sum/k);
        }

        return maxAvg;
    }
};