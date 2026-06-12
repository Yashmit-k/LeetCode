class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        for(auto i:num){
            while(!s.empty() && i<s.top() && k>0){
                s.pop();
                k--;
            }
            s.push(i);
        }
        while(k>0){
            s.pop();
            k--;
        }

        string ans="";
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        int idx=0;
        while(ans[idx]=='0'){
            idx++;
        }
        ans=ans.substr(idx);
        return ans==""?"0":ans;
    }
};