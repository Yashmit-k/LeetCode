class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return true;
        int i=0,c=0;
        while(i<n){
            
            if(nums[i]>(nums[(i+1)%n]))c++;
            i++;
            if(c>1)return false;
        }
        return true;
    }
};