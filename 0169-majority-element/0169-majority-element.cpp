class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int> m;
        for(int i:nums){
            m[i]++;
            if(m[i]>n){
                return i;
            }
        }
        return 0;
    }
};