class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i:nums){
            m[i]++;
        }
        vector<int> a;
        int n=nums.size()/3;
        for(auto [x,y]:m){
            if(y>n){
                a.push_back(x);
            }
        }
        return a;
    }
};