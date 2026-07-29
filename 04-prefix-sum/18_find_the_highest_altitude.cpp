// Problem link: https://leetcode.com/problems/find-the-highest-altitude/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt = 0;
        int currAlt = 0;

        for (int g: gain){
            currAlt += g;
            maxAlt = max(maxAlt, currAlt);
        }
        return maxAlt;
    }
};