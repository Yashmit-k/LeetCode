class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans,c=0;
        for(int i:nums){
            if(c==0){
                ans=i;
                c++;
            }
            else if(i==ans){
                c++;
            }
            else c--;
        }
        return ans;
    }
};