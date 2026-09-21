class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,r=*max_element(nums.begin(),nums.end());
        while(l<r){
            int mid=l+(r-l)/2;
            int sum=0;
            for(auto i:nums){
                sum+= (i+mid-1)/mid;
                if(sum>threshold){
                    break;
                }
            }
            if(sum>threshold){
                l=mid+1;
            }
            else r=mid;
        }
        return l;
    }
};