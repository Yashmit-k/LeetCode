class Solution {
public:
    int a(int t,string s){
        string y="";
        int n=s.length(),flag=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')y+="1";
            else{
                if(i<n-1 && s[i+1]=='1'){
                    y+="10";
                    i++;
                    flag=1;
                }
                else{
                    y+="0";
                }
            }
        }

        if(flag==0)return t;
        
        return a(t+1,y);
    }
    int secondsToRemoveOccurrences(string s) {

        return a(0,s);
    }
};