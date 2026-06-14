class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int sum=0,ma=0;
        unordered_map<int,int> m;
        for(int i:nums){
            m[i]++;
            ma=max(ma,m[i]);
        }
        
        for(auto [i,j]:m){
            
            if(j==ma){
                sum+=ma;
            }
        }
        return sum;
    }
};