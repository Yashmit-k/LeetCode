class Solution {
public:
    string getHint(string s, string g) {
        int n=s.length();
        int bull=0,cows=0;
        unordered_map<char,int> m;
        for(int i=0;i<n;i++){
            if(s[i]!=g[i]){
                m[s[i]]++;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]!=g[i]){
                if(m[g[i]]>0){
                    cows++;
                    m[g[i]]--;
                }
            }
            else{
                bull++;
            }
        }
        return to_string(bull)+"A"+to_string(cows)+"B";
    }
};