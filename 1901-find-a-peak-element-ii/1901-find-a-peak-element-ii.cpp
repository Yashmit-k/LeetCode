class Solution {
public:
    int mr(vector<vector<int>>& mat,int mid,int b){
        int m=mat[0][mid],row=0;
        for(int i=1;i<=b;i++){
            if(mat[i][mid]>m){
                m=mat[i][mid];
                row=i;
            }
        }
        return row;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int l=0,r=mat[0].size()-1,b=mat.size()-1;
        int n=r+1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int row=mr(mat,mid,b);
            int left=(mid-1>=0?mat[row][mid-1]:-1);
            int right=(mid+1<n?mat[row][mid+1]:-1);
            if(mat[row][mid]>left && mat[row][mid]>right){
                return {row,mid};
            }
            else if(mat[row][mid]<left){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return {0,0};
    }
};