class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int close=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])continue;

            int l=i+1,r=nums.size()-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                int temp=abs(target-sum),tempc=abs(target-close);
                close=(temp<tempc)?sum:close;
                if(temp==0){
                    return target;
                }
                else if(sum<target){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return close;
    }
};