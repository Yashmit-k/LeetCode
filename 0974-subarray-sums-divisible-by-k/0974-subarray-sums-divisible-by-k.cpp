class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> m;
        m[0]=1;
        int sum=0,count=0;
        for(auto i:nums){
            sum+=i;
            int d = ((sum % k) + k) % k;
            if(m.find(d)!=m.end()){
                count+=m[d];
            }
            m[d]++;
        }
        return count;
    }
};