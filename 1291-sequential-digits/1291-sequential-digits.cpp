class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string a=to_string(low);
        int len=a.length();
        string x="123456789";
        for(int l=len;l<=9;l++){
            for(int i=0;i+l<=9;i++){
                int y=stoi(x.substr(i,l));
                if(y>=low && y<=high)ans.push_back(y);
            }
        }
        return ans;
    }
};