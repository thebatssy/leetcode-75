// Problem link : https://leetcode.com/problems/merge-strings-alternately/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string temp = "";
        int n = word1.size(), m = word2.size();

        int i = 0, j = 0;
        while (i < n && j < m){
            temp += word1[i++];
            temp += word2[j++];
        }

        while (i < n) temp += word1[i++];
        while (j < m) temp += word2[j++];

        return temp;
    }
};