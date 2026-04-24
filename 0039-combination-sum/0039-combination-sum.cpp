class Solution {
public:
    void back(vector<int>& arr,int target,int index,vector<vector<int>>& ans,vector<int> curr){
        if(index==arr.size()){
            if(target==0){
                ans.push_back(curr);
            }
            return;
        }
        if(arr[index]<=target){
            curr.push_back(arr[index]);
            back(arr,target-arr[index],index,ans,curr);
            curr.pop_back();
        }
        back(arr, target, index + 1, ans, curr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> a;
        vector<int> s;
        back(candidates,target,0,a,s);
        return a;
    }
};