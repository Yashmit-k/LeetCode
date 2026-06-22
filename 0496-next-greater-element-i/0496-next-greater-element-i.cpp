class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int s2=nums2.size()-1;
        vector<int> ans;
        stack<int> s;
        map<int,int> m;
        for(int i=s2;i>=0;i--){
            while(!s.empty() && nums2[i]>s.top()){
                s.pop();
            }
            if(s.empty()){
                s.push(nums2[i]);
                m[nums2[i]]=-1;
            }
            else{
                m[nums2[i]]=s.top();
                s.push(nums2[i]);
            }
        }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;
    }
};