class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1,b=-1;
        for(int i=n;i>0;i--){
            if(nums[i]>nums[i-1]){
                b=i-1;
                break;
            }
        }
        if(b==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        else{
            int l;
            for(int i=n;i>b;i--){
                if(nums[i]>nums[b]){
                    l=i;
                    break;
                }
            }
            swap(nums[l],nums[b]);
            reverse(nums.begin()+b+1,nums.end());
            return;
        }
    }
};