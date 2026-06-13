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
        int i=0;
        while(i < ans.size() && ans[i] == '0'){
            i++;
        }
        ans=ans.substr(i);
        return ans==""?"0":ans;
    }
};