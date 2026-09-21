class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0,r=arr.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int d=arr[mid]-mid-1;
            if(d>=k)r=mid-1;
            else l=mid+1;
        }
        if(r==-1)return k;
        int x=arr[r]-r-1;
        return arr[r]-x+k;
    }
};