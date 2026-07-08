class Solution {
public:
    bool check(vector<int>& piles,int h,int n){
        int total=0;
        for(auto i:piles){
            if(i%n==0){
                total+= (i/n);
            }
            else{
                total+= (i/n)+1;
            }
            if(total>h)return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(piles,h,mid)){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};