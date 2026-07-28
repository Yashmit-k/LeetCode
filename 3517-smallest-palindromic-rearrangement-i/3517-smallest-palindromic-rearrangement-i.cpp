class Solution {
public:
    string smallestPalindrome(string s) {
        array<int, 26> a{};
        for (auto i : s) {
            a[i - 'a']++;
        }
        string left = "", middle;
        for (int i = 0; i < 26; i++) {

            left.append(a[i] / 2, 'a' + i);

            if (a[i] % 2 == 1) {
                middle = 'a' + i;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());
        return left + middle + right;
    }
};