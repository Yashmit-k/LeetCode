class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) {
            return false;
        }

        unordered_map<char,int> x, y;

        int n = s.length();

        for(int i = 0; i < n; i++) {
            x[s[i]]++;
            y[t[i]]++;
        }

        if(x == y) {
            return true;
        }
        else {
            return false;
        }
    }
};