// Problem link: https://leetcode.com/problems/asteroid-collision/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> s;

        for (int i = 0; i < n; i++){
            bool alive = true;
            while (!s.empty() && s.top() > 0 && asteroids[i] < 0){
                if (abs(s.top()) < abs(asteroids[i])) s.pop();
                else if (abs(s.top()) > abs(asteroids[i])){
                    alive = false;
                    break;
                }
                else {
                    s.pop();
                    alive = false;
                    break;
                }

            }
            if (alive) s.push(asteroids[i]);
        }

        if (s.empty()) return {};

        vector<int> ans;
        while (!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};