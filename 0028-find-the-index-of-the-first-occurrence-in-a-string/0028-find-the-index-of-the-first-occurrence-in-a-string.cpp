class Solution {
public:
    int strStr(string haystack, string needle) {
        int length=haystack.length(),length2=needle.length(),idx=-1;
        for(int i=0;i<length;i++){
            if(haystack.substr(i,length2)==needle){
                idx=i;
                break;
            }
        }
        return idx;
    }
};