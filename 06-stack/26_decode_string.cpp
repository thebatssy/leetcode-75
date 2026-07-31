// Problem link: https://leetcode.com/problems/decode-string/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string decodeString(string str) {
        stack<int> s;
        
        for (int i = 0; i < str.size(); i++){
            if (str[i] != ']') s.push(str[i]);
            else {
                string word;
                while (!s.empty() && s.top() != '['){
                    word.push_back(s.top());
                    s.pop();
                }
                reverse(word.begin(), word.end());
                s.pop();
                
                string k;
                while (!s.empty() && isdigit(s.top())){
                    k.push_back(s.top());
                    s.pop();
                }
                reverse(k.begin(), k.end());
                int num = stoi(k);
                
                string repeated;
                for (int j = 0; j < num; j++){
                    repeated.append(word);
                }
                
                for (char c: repeated) s.push(c);
            }
        }
        string ans;
        while (!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end()); 
        
        return ans;
    }
};