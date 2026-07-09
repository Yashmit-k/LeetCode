class Solution {
public:
    bool check(vector<int>& nums, int k,int t){
        int total=0;
        for(auto i:nums){
            if(total+i<=t){
                total+=i;
            }
            else{
                k--;
                total=i;
            }
            if(k<=0)return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end()),r=accumulate(nums.begin(),nums.end(),0);
        while(l<=r){
            int m=l+(r-l)/2;
            if(check(nums,k,m))r=m-1;
            else l=m+1;
        }
        return l;
    }
};