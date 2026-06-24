class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> v;

        while (ss >> word) {
            v.push_back(word);
        }
        word="";
        while(!v.empty()){
            word+=v.back();
            v.pop_back();
            word+=" ";
        }
        word.pop_back();
        return word;
    }
};