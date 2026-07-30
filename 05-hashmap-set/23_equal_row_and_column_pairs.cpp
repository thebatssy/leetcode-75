// Problem link: https://leetcode.com/problems/equal-row-and-column-pairs/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int cnt = 0;

        vector<vector<int>> rows(n);
        for (int row = 0; row < n; row++){
            for (int col = 0; col < n; col++){
                rows[row].push_back(grid[row][col]);
            }
        }

        vector<vector<int>> cols(n);
        for (int col = 0; col < n; col++){
            for (int row = 0; row < n; row++){
                cols[col].push_back(grid[row][col]);
            }
        }

        for (int r = 0; r < n; r++){
            for (int c = 0; c < n; c++){
                if (rows[r] == cols[c]) cnt++;
            }
        }
        return cnt;
    }
};