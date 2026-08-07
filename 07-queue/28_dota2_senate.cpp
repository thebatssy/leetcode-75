// Problem link: https://leetcode.com/problems/dota2-senate/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.size();
        queue<int> r, d;

        for (int i = 0; i < n; i++){
            if (senate[i] == 'R') r.push(i);
            else d.push(i);
        }

        while (!r.empty() && !d.empty()){
            int rIdx = r.front(); r.pop();
            int dIdx = d.front(); d.pop();

            if (rIdx < dIdx) r.push(rIdx + n);
            else d.push(dIdx + n);
        }

        return r.empty() ? "Dire" : "Radiant";
    }
};