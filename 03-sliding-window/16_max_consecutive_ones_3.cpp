// Problem link: https://leetcode.com/problems/max-consecutive-ones-iii/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int maxCons = 0;
        
        for (int j = 0; j < n; j++){
            if (nums[j] == 0) k--;
            
            while (i < n && k < 0){
                if (nums[i] == 0) k++;
                i++;
            }
            
            maxCons = max(maxCons, j-i+1);
        }
        return maxCons;
    }

};