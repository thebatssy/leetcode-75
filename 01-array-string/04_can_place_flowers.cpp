// Problem link: https://leetcode.com/problems/can-place-flowers/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) return true;
        int sz = flowerbed.size();

        for (int i = 0; i < sz; i++){
            if (flowerbed[i] == 1) continue;

            if (i == 0 && (sz == 1 || flowerbed[i+1] == 0)) flowerbed[i] = 1;
            else if (i > 0 && i < sz-1 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) flowerbed[i] = 1;
            else if (i == sz-1 && flowerbed[i-1] == 0) flowerbed[i] = 1;
            else continue;
            n--;
            if (n == 0) return true;
        }
        return false;
    }
};