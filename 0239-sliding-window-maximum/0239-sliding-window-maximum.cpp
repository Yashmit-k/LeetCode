class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l = 0;
        vector<int> ans;
        multiset<int> s;

        for (int r = 0; r < nums.size(); r++) {

            s.insert(nums[r]);

            if (r - l + 1 == k) {

                ans.push_back(*s.rbegin());

                s.erase(s.find(nums[l]));
                l++;
            }
        }

        return ans;
    }
};