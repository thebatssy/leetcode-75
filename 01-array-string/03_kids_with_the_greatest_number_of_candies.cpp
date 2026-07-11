// Problem link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = 0;
        for (int candy: candies){
            maxCandies = max(maxCandies, candy);
        }

        int n = candies.size();
        vector<bool> res(n);
        for (int i = 0; i < n; i++){
            res[i] = candies[i] + extraCandies >= maxCandies ? true : false;
        }
        
        return res;
    }
};