class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> a(26);
        for(auto i:s){
            a[i-'a']++;
        }
        string left="",middle;
        for(int i=0;i<26;i++){
            
            left+=string(a[i] / 2, 'a' + i);

            if(a[i]%2==1){
                middle='a'+i;
            }
        }

        string right=left;
        reverse(right.begin(),right.end());
        return left+middle+right;
    }
};