// Problem link: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool isVowel(char ch){
        return (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u');
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        int cnt = 0;

        for (int i = 0; i < k; i++){
            if (isVowel(s[i])) cnt++;
        }
        int maxCnt = cnt;

        for (int i = k; i < n; i++){
            if (isVowel(s[i])) cnt++;
            if (isVowel(s[i-k])) cnt--;
            maxCnt = max(maxCnt, cnt);
        }
        return maxCnt;
    }
};