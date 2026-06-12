class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        for(char i:num){
            while(!s.empty() && s.top()>i && k>0){
                s.pop();
                k--;
            }
            s.push(i);
        }
        
        while(k>0){
            s.pop();
            k--;
        }
        string ans = "";
        while(!s.empty()) {
            ans += s.top();
            s.pop();
        }

        reverse(ans.begin(), ans.end());
        
        int i = 0;
        while(i < ans.size() && ans[i] == '0')
            i++;

        ans = ans.substr(i);

        return ans.empty() ? "0" : ans;
        
    }

};