
class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        int length=s.length();
        printf("() -%d %d\n{} %d %d\n[] %d %d\n",(int)'(',(int)')',(int)'{',(int)'}',(int)'[',(int)']');
        for(int i=0;i<length;i++){
            if(x.empty()){
                printf("%c %d-push\n",s[i],i);
                x.push(s[i]);
                printf("%c top\n",x.top());
            }
            else if((int)x.top()==(int)s[i]-1 || (int)x.top()==(int)s[i]-2){
                printf("%c %d-pop\n",s[i],i);
                x.pop();
            }
            else{
                printf("%c %d-push1\n",s[i],i);
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