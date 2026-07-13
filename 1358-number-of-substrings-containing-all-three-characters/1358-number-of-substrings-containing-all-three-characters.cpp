class Solution {
public:
    bool isvalid(int a,int b,int c){
        if(a>0 && b>0 && c>0)return true;
        return false;
    }
    
    int numberOfSubstrings(string s) {
        int a=0,b=0,c=0,r=0,l=0;
        int n=s.length();
        long long count=0;
        for(int r=0;r<n;r++){
            if(s[r]=='a')a++;
            else if(s[r]=='b')b++;
            else c++;

            while(isvalid(a,b,c)){
                count+=n-r;
                if(s[l]=='a')a--;
                else if(s[l]=='b')b--;
                else c--;
                l++;
            }
        }

        return count;
    }
};