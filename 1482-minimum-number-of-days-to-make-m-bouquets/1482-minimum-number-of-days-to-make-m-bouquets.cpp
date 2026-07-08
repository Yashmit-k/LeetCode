class Solution {
public:
    bool check(vector<int>& bloomDay, int m, int k,int d){
        int count=0;
        for(auto i:bloomDay){
            if(i<=d){
                count++;
                if(count==k){
                    count=0;
                    m--;
                    if(m==0)return true;
                }
            }
            else{
                count=0;
            }
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l=*min_element(bloomDay.begin(),bloomDay.end()),r=*max_element(bloomDay.begin(),bloomDay.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(bloomDay,m,k,mid))r=mid-1;
            else l=mid+1;
        }
        if(check(bloomDay,m,k,l))return l;
        return -1;
    }
};