// Problem link: https://leetcode.com/problems/greatest-common-divisor-of-strings/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int gcd(int a, int b){
        while (b){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) return "";

        int n = str1.size(), m = str2.size();
        int len = gcd(n, m);

        return str1.substr(0, len);
    }
};