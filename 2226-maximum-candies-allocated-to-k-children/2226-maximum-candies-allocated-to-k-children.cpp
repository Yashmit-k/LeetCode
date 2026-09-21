class Solution {
public:
    bool check(int mid,vector<int>& c,long long k){
        for(auto i:c){
            k-=i/mid;
            if(k<=0)return true;
        }
        return false;
    }
    int maximumCandies(vector<int>& c, long long k) {
        int l=1,r=*max_element(c.begin(),c.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(mid,c,k))l=mid+1;
            else r=mid-1;
        }
        return r;
    }
};