#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int length = s.length(), maxLen = 0;
        string ans = "";

        for (int i = 0; i < length; i++) {
            for (int j = i; j < length; j++) {
                if (ispalindrome(s, i, j)) {
                    if (j - i + 1 > maxLen) {
                        maxLen = j - i + 1;
                        ans = s.substr(i, maxLen);
                    }
                }
            }
        }
        return ans;
    }

    bool ispalindrome(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
