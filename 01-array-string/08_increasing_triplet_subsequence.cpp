// Problem link: https://leetcode.com/problems/increasing-triplet-subsequence/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool increasingTriplet(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return {};
        
        vector<int> smaller(n, -1), greater(n, -1);
        int minIdx = 0, maxIdx = n-1;
        
        for (int i = 1; i < n; i++){
            if (arr[i] <= arr[minIdx]){
                minIdx = i;
                smaller[i] = -1;
            }
            else smaller[i] = minIdx;
        }
        
        for (int i = n-2; i >= 0; i--){
            if (arr[i] >= arr[maxIdx]){
                maxIdx = i;
                greater[i] = -1;
            }
            else greater[i] = maxIdx;
        }
        
        for (int i = 1; i < n-1; i++){
            if (smaller[i] != -1 && greater[i] != -1) 
                return true;
        }
        
        return false;
    }
};