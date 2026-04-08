class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> s={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        backtrack(digits,s,0,ans,"");
        return ans;
    }
    void backtrack(string digits,vector<string>& s,int index,vector<string>& ans,string x){
        
        if(index==digits.size()){
            ans.push_back(x);
            return;
        }
        else{
            for(auto a:s[digits[index]-'0'-2]){
                x+=a;
                backtrack(digits,s,index+1,ans,x);
                x.pop_back();
            }
        }
    }
};