// Problem link: https://leetcode.com/problems/container-with-most-water/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int maxWater = 0;
        
        while (l < r){
            int w = r - l;
            int h = min(height[l], height[r]);
            int currWater = w * h;
            maxWater = max(maxWater, currWater);
            height[l] < height[r] ? l++ : r--;
        }
        return maxWater;
    }
};