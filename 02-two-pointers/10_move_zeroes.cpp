// Problem link: https://leetcode.com/problems/move-zeroes/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    void moveZeroes(vector<int>& vec) {
        int n = vec.size();
        int idx = 0;
        
        for(int i = 0; i < n; i++){
            if(vec[i] != 0){
                swap(vec[i], vec[idx]);
                idx++;
            }
        }
    }
};