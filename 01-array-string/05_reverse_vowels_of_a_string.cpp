// Problem link: https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool isVowel(char c){
        return c == 'a' ||  c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' ||  c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string reverseVowels(string s) {
        int n = s.size();
        int i = 0, j = n-1;
        while (i < j){
            if (!isVowel(s[i])) i++;
            if (!isVowel(s[j])) j--;
            if (isVowel(s[i]) && isVowel(s[j])){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++; j--;
            }
        }
        return s;
    }
};