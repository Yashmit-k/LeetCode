class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0;
        for(int i=0;i<nums.size();i++){
            int t=0;
            while(i<nums.size() && nums[i]==1){
                i++;t++;
            }
            m=max(t,m);
        }
        return m;
    }
};