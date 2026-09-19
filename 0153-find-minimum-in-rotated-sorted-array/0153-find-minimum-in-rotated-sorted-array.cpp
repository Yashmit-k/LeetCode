class Solution {
public:
    int findMin(vector<int>& n) {
        int l=0,r=n.size()-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(n[mid]<n[r])r=mid;
            else l=mid+1;
        }
        return n[l];
    }
};