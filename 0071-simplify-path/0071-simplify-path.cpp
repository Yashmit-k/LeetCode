class Solution {
public:
    vector<string> split(string str, char delimiter) {
    vector<string> result;
    string token;
    stringstream ss(str);

    while (getline(ss, token, delimiter)) {
        result.push_back(token);
    }
    return result;
}
    string simplifyPath(string path) {
        stack<string> y;
        int l=path.size(),i=0;
        vector<string> s=split(path,'/');
        for(auto x:s){
            if(x==".."){
                if (!y.empty()) y.pop();
            }
            else if (x.empty() || x == "."){
                continue;
            }
            else{
                y.push(x);
            }
        }
        string z="";
        while(!y.empty()){
            string t=y.top();
            y.pop();
            z.insert(0,"/"+t);
        }
        return (z.empty()?"/":z);
    }
};