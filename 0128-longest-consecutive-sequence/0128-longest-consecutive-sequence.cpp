class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        priority_queue<int,vector<int>, greater<int>> q;
        int ma=1,s=0;
        for(int i:nums){
            q.push(i);
        }
        int x=q.top();
        q.pop();
        s++;
        while(!q.empty()){
            if(q.top()==x+1){
                s++;
                x++;
                ma=max(ma,s);
            }
            else if(q.top()==x){
                
            }
            else{
                x=q.top();
                s=1;
            }
            q.pop();
        }
        return ma;
    }
};