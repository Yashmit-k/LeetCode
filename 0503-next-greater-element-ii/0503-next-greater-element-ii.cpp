class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size(),n2;
        stack<int> s;
        n2=2*n;
        vector<int> x(n);
        for(int i=n2-1;i>=0;i--){
            int val;
            while(!s.empty() && nums[i%n]>=s.top()){
                s.pop();
            }          
            if(s.empty()){
                val=-1;
            }
            else{
                val=s.top();
            }
            s.push(nums[i%n]);
            if(i<n){
                x[i]=val;
            }
        }
        return x;
    }
};