class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p,n,ans;

        for(auto x:nums){
            if(x<0){
                n.push_back(x);
            }
            else{
                p.push_back(x);
            }
        }
        int size=nums.size()/2;
        for(int i=0;i<size;i++){
            ans.push_back(p[i]);
            ans.push_back(n[i]);
        }
        return ans;
    }
};