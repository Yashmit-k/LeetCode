class Solution {
public:
    int findMin(vector<int>& n) {
        int l=0,r=n.size()-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(n[l]<n[r])r--;
            else l++;
        }
        return n[l];
    }
};