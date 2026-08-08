class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=0;i<n;i++){
            int s=ans.size();
            for(int j=s-1;j>=0;j--){
                ans.push_back(ans[j] | 1<<i);
            }
        }
        return ans;
    }
};