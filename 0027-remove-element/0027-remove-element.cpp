class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        queue<int> x;
        int length=nums.size(),count=0;
        for(int i=0;i<length;i++){
            if(nums[i]!=val){
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};