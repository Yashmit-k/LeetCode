class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;

        for (auto c : s) {
            m[c]++;
        }

        vector<string> b(s.size() + 1);

        for (auto &[c, freq] : m) {
            b[freq].push_back(c);
        }

        s = "";

        for (int i = b.size() - 1; i >= 1; i--) {
            for (auto c : b[i]) {
                int t = 0;

                while (t < i) {
                    s += c;
                    t++;
                }
            }
        }

        return s;
    }
};