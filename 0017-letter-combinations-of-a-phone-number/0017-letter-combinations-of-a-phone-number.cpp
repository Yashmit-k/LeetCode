class Solution {
public:
    vector<string> s={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    void a(string digits,int count,string x){
        cout<<x<<endl;
        if(count==digits.length()){
            ans.push_back(x);
            return;
        }
        for(auto i:s[(digits[count]-'0')-1]){
            cout<<i<<endl;
            a(digits,count+1,x+i);
        }
    }
    vector<string> letterCombinations(string digits) {
        a(digits,0,"");
        return ans;
    }
};