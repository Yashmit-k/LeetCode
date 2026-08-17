class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int j=0,f=0,c=0;
        for(int i=0;i<n-1;i++){
            f=max(f,i+nums[i]);
            if(i==c){
                j++;
                c=f;
            }
        }
        return j;
    }
};