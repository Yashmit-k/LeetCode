
class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        int length=s.length();
        for(int i=0;i<length;i++){
            if(x.empty()){
                x.push(s[i]);
            }
            else if((int)x.top()==(int)s[i]-1 || (int)x.top()==(int)s[i]-2){
                x.pop();
            }
            else{

                x.push(s[i]);
            }
        }
        if(x.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};