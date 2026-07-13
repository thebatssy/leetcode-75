// Problem link: https://leetcode.com/problems/max-number-of-k-sum-pairs/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int ops = 0;

        sort(nums.begin(), nums.end()); 
        int i = 0, j = n-1;

        while (i < j){
            if (nums[i] + nums[j] < k) i++;
            else if (nums[i] + nums[j] > k) j--;
            else {
                ops++;
                i++; j--;
            }
        }
        return ops;
    }
};