// Problem link: https://leetcode.com/problems/unique-number-of-occurrences/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for (int ele: arr) mp[ele]++;

        unordered_set<int> s;
        for (auto p: mp){
            if (s.find(p.second) != s.end()) return false;
            s.insert(p.second);
        }

        return true;
    }
};