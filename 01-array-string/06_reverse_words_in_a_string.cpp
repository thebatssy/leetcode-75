// Problem link: https://leetcode.com/problems/reverse-words-in-a-string/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        reverse(s.begin(), s.end()); 

        string ans = "";
        for (int i = 0; i < n; i++){
            string word = "";

            while (i < n && s[i] != ' '){
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if (word.length() > 0) ans += (word + " ");
        }

        int i = ans.size()-1;
        while (i >= 0 && ans[i] == ' ') i--;

        return ans.substr(0, i+1);
    }
};