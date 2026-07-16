class Solution {
public:

    vector<int> findAnagrams(string s, string p) {
        vector<int> a(26,0);
        vector<int> b(26,0);
        vector<int> ans;
        for(auto i:p){
            a[i-'a']++;
        }
        int size=p.length(),l=0;
        for(int r=0;r<s.length();r++){
            b[s[r]-'a']++;
            if(r-l+1==size){
                if(a==b){
                    ans.push_back(l);
                }
                b[s[l]-'a']--;
                l++;
            }
        }
        return ans;
    }
};