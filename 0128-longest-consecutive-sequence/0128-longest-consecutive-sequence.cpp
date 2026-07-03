class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        unordered_set<int> s;
        s.reserve(nums.size());
        for(auto i:nums){
            s.insert(i);
        }
        int l,ml=1;
        for(auto i:s){
            l=1;
            if(s.find(i-1)==s.end()){
                int t=i+1;
                while(s.find(t)!=s.end()){
                    t++;
                    l++;
                }
                ml=max(ml,l);
            }
        }
        return ml;
    }
};