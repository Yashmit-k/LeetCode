class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(m.find(key)==m.end())return "";
        int l=0,r=m[key].size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int x=m[key][mid].first;
            if(x==timestamp)return m[key][mid].second;
            else if(x<timestamp)l=mid+1;
            else r=mid-1;
        }
        if(r>=0)return m[key][r].second;
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */