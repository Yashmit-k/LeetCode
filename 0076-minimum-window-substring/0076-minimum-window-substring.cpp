class Solution {
public:

    bool check(map<char,int>& m1, map<char,int>& m2){

        for(auto x : m2){

            if(m1[x.first] < x.second){
                return false;
            }
        }

        return true;
    }

    string minWindow(string s, string t) {

        map<char,int> m1, m2;

        for(int i = 0; i < t.length(); i++){
            m2[t[i]]++;
        }

        int l = 0;

        int start = 0;
        int size = INT_MAX;

        for(int r = 0; r < s.length(); r++){

            m1[s[r]]++;

            while(check(m1, m2)){

                if(r - l + 1 < size){

                    size = r - l + 1;
                    start = l;
                }

                m1[s[l]]--;
                l++;
            }
        }

        if(size == INT_MAX){
            return "";
        }

        return s.substr(start, size);
    }
};