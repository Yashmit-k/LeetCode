class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length=nums.size(),count=0;
        for(int i=1;i<length;i++){
            if(nums[i]==nums[i-1])continue;
            else{
                count++;
                nums[count]=nums[i];
            }
        }
        return count+1;
    }
};