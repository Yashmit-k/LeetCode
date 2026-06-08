class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        m[0]=1;
        int count=0;
        int sum=0;
        for(auto x:nums){
            sum+=x;
            int d=sum-k;
            if(m.find(d)!=m.end()){
                
                count+=m[d];
            }
            m[sum]++;
        }
        return count;
    }
};