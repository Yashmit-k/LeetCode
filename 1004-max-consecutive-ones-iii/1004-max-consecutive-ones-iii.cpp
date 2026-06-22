class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,n=nums.size(),len,mlen=0,o=0;
        while(r<n){
            
            if(nums[r]==0){
                o++;
                if(o>k){
                    while(nums[l]!=0){
                        l++;
                    }
                    l++;
                    o--;

                }
            }
            len=r-l+1;
            mlen=max(mlen,len);

            r++;

        }
        return mlen;
    }
    
};