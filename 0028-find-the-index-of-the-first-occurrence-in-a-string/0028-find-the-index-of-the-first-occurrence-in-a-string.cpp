class Solution {
public:
    int strStr(string haystack, string needle) {
        int length=haystack.length(),length2=needle.length(),idx=-1;
        for(int i=0;i<length;i++){
            string t=haystack.substr(i,length2);
            cout<<t<<"  "<<i<<"\n";
            if(t==needle){
                cout<<"hi\n";
                idx=i;
                break;
            }
        }
        return idx;
    }
};