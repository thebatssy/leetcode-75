// Problem link: https://leetcode.com/problems/is-subsequence/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == t) return true;
        int n = s.size(), m = t.size();
        int i = 0, j = 0;

        while (i < n && j < m){
            if (s[i] == t[j]){
                i++; j++;
            }
            else j++;
        }
        return i == n;
    }
};

