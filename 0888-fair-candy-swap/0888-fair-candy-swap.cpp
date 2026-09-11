class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        unordered_map<int,int> m;
        int sum1 = 0, sum2 = 0;

        for(int i = 0; i < b.size(); i++) {
            sum2 += b[i];

            m[b[i]] = i;
        }
        for(int i=0;i<a.size();i++)sum1+=a[i];

        int diff = (sum1 - sum2) / 2;

        for(int x : a) {
            int y = x - diff;

            if(m.find(y) != m.end()) {
                return {x, y};
            }
        }

        return {};
    }
};