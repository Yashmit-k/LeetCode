class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,n=nums.size(),m,r=*max_element(nums.begin(),nums.end());    
        while(l<=r){
            m=l+(r-l)/2;
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=ceil((double)nums[i]/m);
                if(sum>threshold){
                    l=m+1;
                }
            }
            if(sum>threshold){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return l;
    }
};