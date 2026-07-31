// Problem link: https://leetcode.com/problems/removing-stars-from-a-string/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public: // l e c o e 
    string removeStars(string s) {
        int n = s.size();
        stack<char> st;

        for (int i = 0; i < n; i++){
            if (s[i] == '*') st.pop();
            else st.push(s[i]);
        }

        if (st.empty()) return "";
        string ans;

        while (!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};