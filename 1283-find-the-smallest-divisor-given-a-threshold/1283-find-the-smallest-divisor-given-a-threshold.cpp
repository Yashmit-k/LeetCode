class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,r=*max_element(nums.begin(),nums.end());
        while(l<r){
            int mid=l+(r-l)/2;
            int sum=0;
            for(auto i:nums){
                if(i<=mid)sum+=1;
                else if(i%mid==0)sum+=i/mid;
                else sum+=(i/mid)+1;

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