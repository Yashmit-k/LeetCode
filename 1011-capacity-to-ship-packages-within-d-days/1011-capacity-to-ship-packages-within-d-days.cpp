class Solution {
public:
    bool check(vector<int>& weights, int days,int c){
        int total=0;
        for(auto i:weights){
            if(total+i <= c){
                total+=i;
            }
            else{
                days--;
                total=i;
            }
            if(days<=0)return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end()),r=accumulate(weights.begin(),weights.end(),0);
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(weights,days,mid))r=mid-1;
            else l=mid+1;
        }
        return l;
    }
};