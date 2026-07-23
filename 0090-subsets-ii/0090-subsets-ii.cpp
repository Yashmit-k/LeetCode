class Solution {
public:
    void a(int n,set<vector<int>>& s,vector<int>& nums,vector<int> t){
        if(n==0){
            s.insert(t);
            t.push_back(nums[0]);
            s.insert(t);
            return;
        }
        a(n-1,s,nums,t);
        t.push_back(nums[n]);
        a(n-1,s,nums,t);
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        a(nums.size()-1,s,nums,{});
        vector<vector<int>> ans;
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};